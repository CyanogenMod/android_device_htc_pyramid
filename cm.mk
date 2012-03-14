# Specify phone tech before including full_phone
$(call inherit-product, vendor/cm/config/gsm.mk)

# Release name
PRODUCT_RELEASE_NAME := pyramid

# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Inherit device configuration
$(call inherit-product, device/htc/pyramid/device_pyramid.mk)

# Device naming
PRODUCT_DEVICE := pyramid
PRODUCT_NAME := cm_pyramid
PRODUCT_BRAND := htc_europe
PRODUCT_MODEL := HTC Sensation
PRODUCT_MANUFACTURER := HTC

# Set build fingerprint / ID / Product Name ect.
PRODUCT_BUILD_PROP_OVERRIDES += PRODUCT_NAME=htc_pyramid BUILD_ID=IML74K BUILD_FINGERPRINT=htc_europe/htc_pyramid/pyramid:4.0.3/IML74K/275847.101:user/release-keys PRIVATE_BUILD_DESC="3.25.401.101 CL275847 release-keys" BUILD_NUMBER=275847





