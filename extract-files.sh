#!/bin/sh

# Copyright (C) 2010 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

DEVICE=pyramid

mkdir -p ../../../vendor/htc/$DEVICE/proprietary

adb pull /system/bin/awb_camera ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/bma150_usr ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/btld ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/charging ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/dcvs ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/dcvsd ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/hdmid ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/htc_ebdlogd ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/htcbatt ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/ipd ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/ip ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/load-modem.sh ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/logcat2 ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/lsc_camera ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/mpdecision ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/netmgrd ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/netsharing ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/rild ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/rmt_storage ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/ser2net ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/thermald ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/qmuxd ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/bin/usbnet ../../../vendor/htc/$DEVICE/proprietary

adb pull /system/xbin/wireless_modem ../../../vendor/htc/$DEVICE/proprietary

adb pull /system/etc/AdieHWCodec.csv ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/etc/agps_rm ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/etc/AudioBTID.csv ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/etc/TPA2051_CFG.csv ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/etc/TPA2051_CFG_XC.csv ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/etc/vpimg ../../../vendor/htc/$DEVICE/proprietary

adb pull /system/lib/egl/libEGL_adreno200.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/egl/libGLESv1_CM_adreno200.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/egl/libGLESv2_adreno200.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/egl/libq3dtools_adreno200.so ../../../vendor/htc/$DEVICE/proprietary

adb pull /system/lib/libaudcal.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libaudio.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libaudioalsa.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libcamera.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libdiag.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libdll.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libdsutils.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libdsi_netctrl.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libgemini.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libganril.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libgsl.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libhtc_acoustic.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libhtc_ril.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libidl.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libkineto.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libmmipl.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libmmjpeg.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libmpl.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libmpl_jni.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libmlplatform.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libmllite.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libnetmgr.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/liboemcamera.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libOmxCore.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libOmxVdec.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libOmxVenc.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/liboverlay.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libqdp.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libqmi.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libqmiservices.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/libril.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/librilswitch.so ../../../vendor/htc/$DEVICE/proprietary

adb pull /system/lib/hw/copybit.msm8660.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/hw/gps.pyramid.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/hw/gralloc.default.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/hw/gralloc.msm8660.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/hw/lights.msm8660.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/hw/overlay.default.so ../../../vendor/htc/$DEVICE/proprietary
adb pull /system/lib/hw/sensors.pyramid.so ../../../vendor/htc/$DEVICE/proprietary

(cat << EOF) | sed s/__DEVICE__/$DEVICE/g > ../../../vendor/htc/$DEVICE/$DEVICE-vendor-blobs.mk
# Copyright (C) 2010 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This file is generated by device/htc/__DEVICE__/extract-files.sh

# Prebuilt libraries that are needed to build open-source libraries
PRODUCT_COPY_FILES += \\
    vendor/htc/__DEVICE__/proprietary/libcamera.so:obj/lib/libcamera.so \\
    vendor/htc/__DEVICE__/proprietary/libaudio.so:obj/lib/libaudio.so \\
    vendor/htc/__DEVICE__/proprietary/libaudioalsa.so:obj/lib/libaudioalsa.so \\
    vendor/htc/__DEVICE__/proprietary/libril.so:obj/lib/libril.so

# All the blobs necessary for pyramid
PRODUCT_COPY_FILES += \\
    vendor/htc/__DEVICE__/proprietary/TPA2051_CFG.csv:/system/etc/TPA2051_CFG.csv \\
    vendor/htc/__DEVICE__/proprietary/TPA2051_CFG_XC.csv:/system/etc/TPA2051_CFG_XC.csv \\
    vendor/htc/__DEVICE__/proprietary/agps_rm:/system/etc/agps_rm \\
    vendor/htc/__DEVICE__/proprietary/AdieHWCodec.csv:/system/etc/AdieHWCodec.csv \\
    vendor/htc/__DEVICE__/proprietary/AudioBTID.csv:/system/etc/AudioBTID.csv \\
    vendor/htc/__DEVICE__/proprietary/awb_camera:/system/bin/awb_camera \\
    vendor/htc/__DEVICE__/proprietary/bma150_usr:/system/bin/bma150_usr \\
    vendor/htc/__DEVICE__/proprietary/btld:/system/bin/btld \\
    vendor/htc/__DEVICE__/proprietary/charging:/system/bin/charging \\
    vendor/htc/__DEVICE__/proprietary/dcvs:/system/bin/dcvs \\
    vendor/htc/__DEVICE__/proprietary/dcvsd:/system/bin/dcvsd \\
    vendor/htc/__DEVICE__/proprietary/htc_ebdlogd:/system/bin/htc_ebdlogd \\
    vendor/htc/__DEVICE__/proprietary/htcbatt:/system/bin/htcbatt \\
    vendor/htc/__DEVICE__/proprietary/hdmid:/system/bin/hdmid \\
    vendor/htc/__DEVICE__/proprietary/ipd:/system/bin/ipd \\
    vendor/htc/__DEVICE__/proprietary/ip:/system/bin/ip \\
    vendor/htc/__DEVICE__/proprietary/logcat2:/system/bin/logcat2 \\
    vendor/htc/__DEVICE__/proprietary/lsc_camera:/system/bin/lsc_camera \\
    vendor/htc/__DEVICE__/proprietary/netmgrd:/system/bin/netmgrd \\
    vendor/htc/__DEVICE__/proprietary/netsharing:/system/bin/netsharing \\
    vendor/htc/__DEVICE__/proprietary/rmt_storage:/system/bin/rmt_storage \\
    vendor/htc/__DEVICE__/proprietary/rild:/system/bin/rild \\
    vendor/htc/__DEVICE__/proprietary/ser2net:/system/bin/ser2net \\
    vendor/htc/__DEVICE__/proprietary/load-modem.sh:/system/bin/load-modem.sh \\
    vendor/htc/__DEVICE__/proprietary/mpdecision:/system/bin/mpdecision \\
    vendor/htc/__DEVICE__/proprietary/thermald:/system/bin/thermald \\
    vendor/htc/__DEVICE__/proprietary/qmuxd:/system/bin/qmuxd \\
    vendor/htc/__DEVICE__/proprietary/usbnet:/system/bin/usbnet \\
    vendor/htc/__DEVICE__/proprietary/wireless_modem:/system/xbin/wireless_modem \\
    vendor/htc/__DEVICE__/proprietary/agps_rm:/system/etc/agps_rm \\
    vendor/htc/__DEVICE__/proprietary/libEGL_adreno200.so:/system/lib/egl/libEGL_adreno200.so \\
    vendor/htc/__DEVICE__/proprietary/libGLESv1_CM_adreno200.so:/system/lib/egl/libGLESv1_CM_adreno200.so \\
    vendor/htc/__DEVICE__/proprietary/libGLESv2_adreno200.so:/system/lib/egl/libGLESv2_adreno200.so \\
    vendor/htc/__DEVICE__/proprietary/libq3dtools_adreno200.so:/system/lib/egl/libq3dtools_adreno200.so \\
    vendor/htc/__DEVICE__/proprietary/libOmxVdec.so:/system/lib/libOmxVdec.so \\
    vendor/htc/__DEVICE__/proprietary/libOmxCore.so:/system/lib/libOmxCore.so \\
    vendor/htc/__DEVICE__/proprietary/libOmxVenc.so:/system/lib/libOmxVenc.so \\
    vendor/htc/__DEVICE__/proprietary/libaudcal.so:/system/lib/libaudcal.so \\
    vendor/htc/__DEVICE__/proprietary/libaudio.so:/system/lib/libaudio.so \\
    vendor/htc/__DEVICE__/proprietary/libaudioalsa.so:/system/lib/libaudioalsa.so \\
    vendor/htc/__DEVICE__/proprietary/libcamera.so:/system/lib/libcamera.so \\
    vendor/htc/__DEVICE__/proprietary/libdiag.so:/system/lib/libdiag.so \\
    vendor/htc/__DEVICE__/proprietary/libdll.so:/system/lib/libdll.so \\
    vendor/htc/__DEVICE__/proprietary/libdsutils.so:/system/lib/libdsutils.so \\
    vendor/htc/__DEVICE__/proprietary/libdsi_netctrl.so:/system/lib/libdsi_netctrl.so \\
    vendor/htc/__DEVICE__/proprietary/libgemini.so:/system/lib/libgemini.so \\
    vendor/htc/__DEVICE__/proprietary/libgsl.so:/system/lib/libgsl.so \\
    vendor/htc/__DEVICE__/proprietary/libhtc_acoustic.so:/system/lib/libhtc_acoustic.so \\
    vendor/htc/__DEVICE__/proprietary/libhtc_ril.so:/system/lib/libhtc_ril.so \\
    vendor/htc/__DEVICE__/proprietary/libidl.so:/system/lib/libidl.so \\
    vendor/htc/__DEVICE__/proprietary/libril.so:/system/lib/libril.so \\
    vendor/htc/__DEVICE__/proprietary/librilswitch.so:/system/lib/librilswitch.so \\
    vendor/htc/__DEVICE__/proprietary/liboverlay.so:/system/lib/liboverlay.so \\
    vendor/htc/__DEVICE__/proprietary/libganril.so:/system/lib/libganril.so \\
    vendor/htc/__DEVICE__/proprietary/libkineto.so:/system/lib/libkineto.so \\
    vendor/htc/__DEVICE__/proprietary/libmmipl.so:/system/lib/libmmipl.so \\
    vendor/htc/__DEVICE__/proprietary/libmmjpeg.so:/system/lib/libmmjpeg.so \\
    vendor/htc/__DEVICE__/proprietary/libmpl.so:/system/lib/libmpl.so \\
    vendor/htc/__DEVICE__/proprietary/libmpl_jni.so:/system/lib/libmpl_jni.so \\
    vendor/htc/__DEVICE__/proprietary/libmllite.so:/system/lib/libmllite.so \\
    vendor/htc/__DEVICE__/proprietary/libmlplatform.so:/system/lib/libmlplatform.so \\
    vendor/htc/__DEVICE__/proprietary/libnetmgr.so:/system/lib/libnetmgr.so \\
    vendor/htc/__DEVICE__/proprietary/liboemcamera.so:/system/lib/liboemcamera.so \\
    vendor/htc/__DEVICE__/proprietary/libqdp.so:/system/lib/libqdp.so \\
    vendor/htc/__DEVICE__/proprietary/libqmi.so:/system/lib/libqmi.so \\
    vendor/htc/__DEVICE__/proprietary/libqmiservices.so:/system/lib/libqmiservices.so \\
    vendor/htc/__DEVICE__/proprietary/vpimg:/system/etc/vpimg \\
    vendor/htc/__DEVICE__/proprietary/gralloc.msm8660.so:/system/lib/hw/gralloc.msm8660.so \\
    vendor/htc/__DEVICE__/proprietary/copybit.msm8660.so:/system/lib/hw/copybit.msm8660.so \\
    vendor/htc/__DEVICE__/proprietary/gps.pyramid.so:/system/lib/hw/gps.pyramid.so \\
    vendor/htc/__DEVICE__/proprietary/gralloc.default.so:/system/lib/hw/gralloc.default.so \\
    vendor/htc/__DEVICE__/proprietary/lights.msm8660.so:/system/lib/hw/lights.msm8660.so \\
    vendor/htc/__DEVICE__/proprietary/overlay.default.so:/system/lib/hw/overlay.default.so \\
    vendor/htc/__DEVICE__/proprietary/sensors.pyramid.so:/system/lib/hw/sensors.pyramid.so
EOF

./setup-makefiles.sh
