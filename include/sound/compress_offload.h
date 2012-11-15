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
#ifndef __COMPRESS_OFFLOAD_H
#define __COMPRESS_OFFLOAD_H
#include <linux/types.h>
struct snd_compressed_buffer {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t fragment_size;
 int fragments;
};
struct snd_compr_params {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct snd_compressed_buffer buffer;
 struct snd_codec codec;
};
struct snd_compr_tstamp {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t copied_bytes;
 size_t copied_total;
 size_t decoded;
 size_t rendered;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 sampling_rate;
 uint64_t timestamp;
};
struct snd_compr_avail {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t avail;
 struct snd_compr_tstamp tstamp;
};
struct snd_compr_caps {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 num_codecs;
 __u32 min_fragment_size;
 __u32 max_fragment_size;
 __u32 min_fragments;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 max_fragments;
 __u32 codecs[MAX_NUM_CODECS];
 __u32 reserved[11];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct snd_compr_codec_caps {
 __u32 codec;
 __u32 num_descriptors;
 struct snd_codec_desc descriptor[MAX_NUM_CODEC_DESCRIPTORS];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define SNDRV_COMPRESS_GET_CAPS _IOWR('C', 0x00, struct snd_compr_caps *)
#define SNDRV_COMPRESS_GET_CODEC_CAPS _IOWR('C', 0x01, struct snd_compr_codec_caps *)
#define SNDRV_COMPRESS_SET_PARAMS _IOW('C', 0x02, struct snd_compr_params *)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SNDRV_COMPRESS_GET_PARAMS _IOR('C', 0x03, struct snd_compr_params *)
#define SNDRV_COMPRESS_TSTAMP _IOR('C', 0x10, struct snd_compr_tstamp *)
#define SNDRV_COMPRESS_AVAIL _IOR('C', 0x11, struct snd_compr_avail *)
#define SNDRV_COMPRESS_PAUSE _IO('C', 0x20)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SNDRV_COMPRESS_RESUME _IO('C', 0x21)
#define SNDRV_COMPRESS_START _IO('C', 0x22)
#define SNDRV_COMPRESS_STOP _IO('C', 0x23)
#define SNDRV_COMPRESS_DRAIN _IO('C', 0x24)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SND_COMPR_TRIGGER_DRAIN 7  
#endif

