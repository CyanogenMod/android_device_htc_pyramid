#
# Copyright (C) 2009 The Android Open Source Project
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
#

#
# This file describes the use of the A1026 chip by the media
# framework using system properties.
#
# Note:    The property key and value has some length
#          limit as defined by PROPERTY_KEY_MAX and
#          PROPERTY_VALUE_MAX, respectively
#
# WARNING: We may not use system properties for specifying
#          media capabilities and profiles in the future
#
PRODUCT_PROPERTY_OVERRIDES += \
      media.a1026.nsForVoiceRec            = 0 \
      media.a1026.enableA1026              = 0
