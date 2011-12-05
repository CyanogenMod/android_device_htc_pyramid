/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <AudioSystem.h>
#define LOG_TAG "AudioPolicyManagerBase"
//#define LOG_NDEBUG 0
#include <utils/Log.h>
#include <AudioPolicyManagerBase.h>
#include <hardware/audio_effect.h>
#include <math.h>

namespace android {
status_t AudioPolicyManagerBase::setEffectEnabled(EffectDescriptor *pDesc, bool enabled)
{
    if (enabled == pDesc->mEnabled) {
        LOGV("setEffectEnabled(%s) effect already %s",
             enabled?"true":"false", enabled?"enabled":"disabled");
        return INVALID_OPERATION;
    }

    if (enabled) {
        if (mTotalEffectsCpuLoad + pDesc->mDesc.cpuLoad > getMaxEffectsCpuLoad()) {
            LOGW("setEffectEnabled(true) CPU Load limit exceeded for Fx %s, CPU %f MIPS",
                 pDesc->mDesc.name, (float)pDesc->mDesc.cpuLoad/10);
            return INVALID_OPERATION;
        }
        mTotalEffectsCpuLoad += pDesc->mDesc.cpuLoad;
        LOGV("setEffectEnabled(true) total CPU %d", mTotalEffectsCpuLoad);
    } else {
        if (mTotalEffectsCpuLoad < pDesc->mDesc.cpuLoad) {
            LOGW("setEffectEnabled(false) CPU load %d too high for total %d",
                    pDesc->mDesc.cpuLoad, mTotalEffectsCpuLoad);
            pDesc->mDesc.cpuLoad = mTotalEffectsCpuLoad;
        }
        mTotalEffectsCpuLoad -= pDesc->mDesc.cpuLoad;
        LOGV("setEffectEnabled(false) total CPU %d", mTotalEffectsCpuLoad);
    }
    pDesc->mEnabled = enabled;
    return NO_ERROR;
}

status_t AudioPolicyManagerBase::setEffectEnabled(int id, bool enabled)
{
    ssize_t index = mEffects.indexOfKey(id);
    if (index < 0) {
        LOGW("setEffectEnabled() unknown effect ID %d", id);
        return INVALID_OPERATION;
    }

    return setEffectEnabled(mEffects.valueAt(index), enabled);
}


bool AudioPolicyManagerBase::isStreamActive(int stream, uint32_t inPastMs) const
{
    nsecs_t sysTime = systemTime();
    for (size_t i = 0; i < mOutputs.size(); i++) {
        if (mOutputs.valueAt(i)->mRefCount[stream] != 0 ||
            ns2ms(sysTime - mOutputs.valueAt(i)->mStopTime[stream]) < inPastMs) {
            return true;
        }
    }
    return false;
}


status_t AudioPolicyManagerBase::initCheck()
{
    return NO_ERROR;
}

uint32_t AudioPolicyManagerBase::getDevicesForStream(AudioSystem::stream_type stream) {
    uint32_t devices;
    // By checking the range of stream before calling getStrategy, we avoid
    // getStrategy's behavior for invalid streams.  getStrategy would do a LOGE
    // and then return STRATEGY_MEDIA, but we want to return the empty set.

    if (stream < (AudioSystem::stream_type) 0 || stream >= AudioSystem::NUM_STREAM_TYPES) {
        devices = 0;
    } else {
        AudioPolicyManagerBase::routing_strategy strategy = getStrategy(stream);
        devices = getDeviceForStrategy(strategy, true);
    }
    return devices;
}


}; // namespace android
