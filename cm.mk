#Inherit phone tech before including full_phone.
$(call inherit-product, vendor/cm/config/gsm.mk)

PRODUCT_RELEASE_NAME := Sensation

# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Inherit device configuration.
$(call inherit-product, device/htc/pyramid/device_pyramid.mk)

PRODUCT_BUILD_PROP_OVERRIDES += PRODUCT_NAME=htc_pyramid BUILD_ID=GRJ22 BUILD_DISPLAY_ID=GRJ22 BUILD_FINGERPRINT="tmous/htc_pyramid/pyramid:2.3.4GRJ22/125597.1:user/release-keys" PRVIATE_BUILD_DESC="1.45.531.1 CL125597 release-keys"

PRODUCT_NAME := cm_pyramid
PRODUCT_DEVICE := pyramid

