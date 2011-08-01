ifneq ($(filter pyramid,$(TARGET_DEVICE)),)
    include $(all-subdir-makefiles)
endif
