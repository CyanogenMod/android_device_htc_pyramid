#
# Copyright (C) 2011 The CyanogenMod Project
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

$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

$(call inherit-product, device/htc/msm8660-common/msm8660.mk)

DEVICE_PACKAGE_OVERLAYS += device/htc/pyramid/overlay

# Boot ramdisk setup
PRODUCT_COPY_FILES += \
    	device/htc/pyramid/prebuilt/init:root/init \
	device/htc/pyramid/ramdisk/init.rc:root/init.rc \
	device/htc/pyramid/ramdisk/init.pyramid.rc:root/init.pyramid.rc \
	device/htc/pyramid/ramdisk/init.pyramid.usb.rc:root/init.pyramid.usb.rc \
	device/htc/pyramid/ramdisk/ueventd.pyramid.rc:root/ueventd.pyramid.rc

## recovery and custom charging
PRODUCT_COPY_FILES += \
    device/htc/pyramid/prebuilt/init:recovery/root/init \
    device/htc/pyramid/recovery/sbin/choice_fn:recovery/root/sbin/choice_fn \
    device/htc/pyramid/recovery/sbin/power_test:recovery/root/sbin/power_test \
    device/htc/pyramid/recovery/sbin/offmode_charging:recovery/root/sbin/offmode_charging \
    device/htc/pyramid/recovery/sbin/detect_key:recovery/root/sbin/detect_key \
    device/htc/pyramid/recovery/sbin/htcbatt:recovery/root/sbin/htcbatt

# Some misc configeration files
PRODUCT_COPY_FILES += \
	device/htc/pyramid/prebuilt/vold.fstab:system/etc/vold.fstab \
	device/htc/pyramid/prebuilt/media_profiles.xml:system/etc/media_profiles.xml \
    	device/htc/pyramid/prebuilt/gps.conf:system/etc/gps.conf

# Keylayouts and Keychars
PRODUCT_COPY_FILES += \
	device/htc/pyramid/keychars/pyramid-keypad.kcm:system/usr/keychars/pyramid-keypad.kcm \
	device/htc/pyramid/keylayout/AVRCP.kl:system/usr/keylayout/AVRCP.kl \
	device/htc/pyramid/keylayout/cy8c-touchscreen.kl:system/usr/keylayout/cy8c-touchscreen.kl \
	device/htc/pyramid/keylayout/h2w_headset.kl:system/usr/keylayout/h2w_headset.kl \
	device/htc/pyramid/keylayout/pyramid-keypad.kl:system/usr/keylayout/pyramid-keypad.kl

#Bluetooth Firmwhere File (disabled while bt is broken)
#PRODUCT_COPY_FILES += \
#	device/htc/pyramid/prebuilt/bcm4329.hcd:system/etc/bcm4329.hcd \

# Input device config
PRODUCT_COPY_FILES += \
	device/htc/pyramid/prebuilt/cy8c-touchscreen.idc:system/usr/idc/cy8c-touchscreen.idc \
	device/htc/pyramid/prebuilt/synaptics-rmi-touchscreen.idc:system/usr/idc/synaptics-rmi-touchscreen.idc

# Sound configs
PRODUCT_COPY_FILES += \
    device/htc/pyramid/dsp/AdieHWCodec.csv:system/etc/AdieHWCodec.csv \
    device/htc/pyramid/dsp/AIC3254_REG.csv:system/etc/AIC3254_REG.csv \
    device/htc/pyramid/dsp/AIC3254_REG_DualMic.csv:system/etc/AIC3254_REG_DualMic.csv \
    device/htc/pyramid/dsp/AudioBTID.csv:system/etc/AudioBTID.csv \
    device/htc/pyramid/dsp/CodecDSPID.txt:system/etc/CodecDSPID.txt \
    device/htc/pyramid/dsp/CodecDSPID_WB.txt:system/etc/CodecDSPID_WB.txt \
    device/htc/pyramid/dsp/TPA2051_CFG.csv:system/etc/TPA2051_CFG.csv \
    device/htc/pyramid/dsp/TPA2051_CFG_XC.csv:system/etc/TPA2051_CFG_XC.csv \
    device/htc/pyramid/dsp/soundimage/Sound_MFG.txt:system/etc/soundimage/Sound_MFG.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Original_Recording.txt:system/etc/soundimage/Sound_Original_Recording.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Original_SPK.txt:system/etc/soundimage/Sound_Original_SPK.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Original.txt:system/etc/soundimage/Sound_Original.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Phone_Original_HP_LE.txt:system/etc/soundimage/Sound_Phone_Original_HP_LE.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Phone_Original_HP.txt:system/etc/soundimage/Sound_Phone_Original_HP.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Phone_Original_HP_WB_LE.txt:system/etc/soundimage/Sound_Phone_Original_HP_WB_LE.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Phone_Original_HP_WB.txt:system/etc/soundimage/Sound_Phone_Original_HP_WB.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Phone_Original_REC_NEL.txt:system/etc/soundimage/Sound_Phone_Original_REC_NEL.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Phone_Original_REC.txt:system/etc/soundimage/Sound_Phone_Original_REC.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Phone_Original_REC_WB.txt:system/etc/soundimage/Sound_Phone_Original_REC_WB.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Phone_Original_SPK.txt:system/etc/soundimage/Sound_Phone_Original_SPK.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Phone_Original_SPK_WB.txt:system/etc/soundimage/Sound_Phone_Original_SPK_WB.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Rec_Landscape.txt:system/etc/soundimage/Sound_Rec_Landscape.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Recording.txt:system/etc/soundimage/Sound_Recording.txt \
    device/htc/pyramid/dsp/soundimage/Sound_Rec_Portrait.txt:system/etc/soundimage/Sound_Rec_Portrait.txt

#Copy any kernel modules
PRODUCT_COPY_FILES += \
	device/htc/pyramid/modules/bcm4329.ko:system/lib/modules/bcm4329.ko \
	device/htc/pyramid/modules/kineto_gan.ko:system/lib/modules/kineto_gan.ko

#Overrides
PRODUCT_PROPERTY_OVERRIDES := \
    	ro.opengles.version=131072 \
	persist.sys.usb.config=mtp \
	ro.setupwizard.enable_bypass=1 \
        dalvik.vm.lockprof.threshold=500 \
        dalvik.vm.dexopt-flags=m=y

# we have enough storage space to hold precise GC data
PRODUCT_TAGS += dalvik.gc.type-precise

# Device uses high-density artwork where available
PRODUCT_AAPT_CONFIG := normal hdpi
PRODUCT_AAPT_PREF_CONFIG := hdpi
PRODUCT_LOCALES += en_US hdpi

ifeq ($(TARGET_PREBUILT_KERNEL),)
LOCAL_KERNEL := device/htc/pyramid/prebuilt/kernel
else
LOCAL_KERNEL := $(TARGET_PREBUILT_KERNEL)
endif

PRODUCT_COPY_FILES += \
    $(LOCAL_KERNEL):kernel

# call the proprietary setup
$(call inherit-product-if-exists, vendor/htc/pyramid/pyramid-vendor.mk)

$(call inherit-product, frameworks/base/build/phone-hdpi-512-dalvik-heap.mk)

PRODUCT_NAME := htc_pyramid
PRODUCT_DEVICE := pyramid
