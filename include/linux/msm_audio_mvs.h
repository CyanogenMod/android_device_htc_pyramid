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
#ifndef __MSM_AUDIO_MVS_H
#define __MSM_AUDIO_MVS_H
#include <linux/msm_audio.h>
#define AUDIO_GET_MVS_CONFIG _IOW(AUDIO_IOCTL_MAGIC,   (AUDIO_MAX_COMMON_IOCTL_NUM + 0), unsigned)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AUDIO_SET_MVS_CONFIG _IOR(AUDIO_IOCTL_MAGIC,   (AUDIO_MAX_COMMON_IOCTL_NUM + 1), unsigned)
#define MVS_MODE_IS733 0x1
#define MVS_MODE_IS127 0x2
#define MVS_MODE_4GV_NB 0x3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MVS_MODE_4GV_WB 0x4
#define MVS_MODE_AMR 0x5
#define MVS_MODE_EFR 0x6
#define MVS_MODE_FR 0x7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MVS_MODE_HR 0x8
#define MVS_MODE_LINEAR_PCM 0x9
#define MVS_MODE_G711 0xA
#define MVS_MODE_PCM 0xC
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MVS_MODE_AMR_WB 0xD
#define MVS_MODE_G729A 0xE
#define MVS_MODE_G711A 0xF
#define MVS_MODE_G722 0x10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MVS_MODE_PCM_WB 0x80000000
enum msm_audio_amr_mode {
 MVS_AMR_MODE_0475,
 MVS_AMR_MODE_0515,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_MODE_0590,
 MVS_AMR_MODE_0670,
 MVS_AMR_MODE_0740,
 MVS_AMR_MODE_0795,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_MODE_1020,
 MVS_AMR_MODE_1220,
 MVS_AMR_MODE_0660,
 MVS_AMR_MODE_0885,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_MODE_1265,
 MVS_AMR_MODE_1425,
 MVS_AMR_MODE_1585,
 MVS_AMR_MODE_1825,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_MODE_1985,
 MVS_AMR_MODE_2305,
 MVS_AMR_MODE_2385,
 MVS_AMR_MODE_UNDEF
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum msm_audio_voc_rate {
 MVS_VOC_0_RATE,
 MVS_VOC_8_RATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_VOC_4_RATE,
 MVS_VOC_2_RATE,
 MVS_VOC_1_RATE
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_audio_amr_frame_type {
 MVS_AMR_SPEECH_GOOD,
 MVS_AMR_SPEECH_DEGRADED,
 MVS_AMR_ONSET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_SPEECH_BAD,
 MVS_AMR_SID_FIRST,
 MVS_AMR_SID_UPDATE,
 MVS_AMR_SID_BAD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_NO_DATA,
 MVS_AMR_SPEECH_LOST
};
enum msm_audio_g711a_mode {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_G711A_MODE_MULAW,
 MVS_G711A_MODE_ALAW
};
enum mvs_g722_mode_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_G722_MODE_01,
 MVS_G722_MODE_02,
 MVS_G722_MODE_03,
 MVS_G722_MODE_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_G722_MODE_UNDEF
};
enum msm_audio_g711a_frame_type {
 MVS_G711A_SPEECH_GOOD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_G711A_SID,
 MVS_G711A_NO_DATA,
 MVS_G711A_ERASURE
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_audio_g729a_frame_type {
 MVS_G729A_NO_DATA,
 MVS_G729A_SPEECH_GOOD,
 MVS_G729A_SID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_G729A_ERASURE
};
struct msm_audio_mvs_config {
 uint32_t mvs_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t rate_type;
 uint32_t dtx_mode;
};
#define MVS_MAX_VOC_PKT_SIZE 640
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_audio_mvs_frame {
 uint32_t frame_type;
 uint32_t len;
 uint8_t voc_pkt[MVS_MAX_VOC_PKT_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif

