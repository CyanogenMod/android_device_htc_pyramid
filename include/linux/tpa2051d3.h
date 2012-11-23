/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef TPA2051D3_H
#define TPA2051D3_H
#include <linux/ioctl.h>
#define TPA2051D3_I2C_NAME "tpa2051d3"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPKR_OUTPUT 0
#define HEADSET_OUTPUT 1
#define DUAL_OUTPUT 2
#define HANDSET_OUTPUT 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BEATS_ON_OUTPUT 4
#define BEATS_OFF_OUTPUT 5
#define LINEOUT_OUTPUT 6
#define MODE_CMD_LEM 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tpa2051d3_platform_data {
 uint32_t gpio_tpa2051_spk_en;
 unsigned char spkr_cmd[7];
 unsigned char hsed_cmd[7];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char rece_cmd[7];
 uint32_t gpio_tpa2051_spk_en_cpu;
};
struct tpa2051_config_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int data_len;
 unsigned int mode_num;
 unsigned char *cmd_data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum TPA2051_Mode {
 TPA2051_MODE_OFF,
 TPA2051_MODE_PLAYBACK_SPKR,
 TPA2051_MODE_PLAYBACK_HEADSET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TPA2051_MODE_RING,
 TPA2051_MODE_VOICECALL_SPKR,
 TPA2051_MODE_VOICECALL_HEADSET,
 TPA2051_MODE_FM_SPKR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TPA2051_MODE_FM_HEADSET,
 TPA2051_MODE_PLAYBACK_REC,
 TPA2051_MODE_VOICECALL_REC,
 TPA2051_MODE_PLAYBACK_HEADSET_BEATS_ON,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TPA2051_MODE_PLAYBACK_HEADSET_BEATS_OFF,
 TPA2051_MODE_LINEOUT,
 TPA2051_MAX_MODE
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TPA2051_IOCTL_MAGIC 'a'
#define TPA2051_SET_CONFIG _IOW(TPA2051_IOCTL_MAGIC, 0x01, unsigned)
#define TPA2051_READ_CONFIG _IOW(TPA2051_IOCTL_MAGIC, 0x02, unsigned)
#define TPA2051_SET_MODE _IOW(TPA2051_IOCTL_MAGIC, 0x03, unsigned)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TPA2051_SET_PARAM _IOW(TPA2051_IOCTL_MAGIC, 0x04, unsigned)
#define TPA2051_WRITE_REG _IOW(TPA2051_IOCTL_MAGIC, 0x07, unsigned)
#endif

