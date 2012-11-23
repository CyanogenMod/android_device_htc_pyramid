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
#ifndef __LINUX_MSM_CAMERA_H
#define __LINUX_MSM_CAMERA_H
#ifdef MSM_CAMERA_BIONIC
#include <sys/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#include <linux/types.h>
#include <asm/sizes.h>
#include <linux/ioctl.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef MSM_CAMERA_GCC
#include <time.h>
#else
#include <linux/time.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define MAX_SENSOR_NUM 5
#define MAX_SENSOR_NAME 32
#define MSM_CAM_IOCTL_MAGIC 'm'
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_CAM_IOCTL_GET_SENSOR_INFO   _IOR(MSM_CAM_IOCTL_MAGIC, 1, struct msm_camsensor_info *)
#define MSM_CAM_IOCTL_REGISTER_PMEM   _IOW(MSM_CAM_IOCTL_MAGIC, 2, struct msm_pmem_info *)
#define MSM_CAM_IOCTL_UNREGISTER_PMEM   _IOW(MSM_CAM_IOCTL_MAGIC, 3, unsigned)
#define MSM_CAM_IOCTL_CTRL_COMMAND   _IOW(MSM_CAM_IOCTL_MAGIC, 4, struct msm_ctrl_cmd *)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_CAM_IOCTL_CONFIG_VFE   _IOW(MSM_CAM_IOCTL_MAGIC, 5, struct msm_camera_vfe_cfg_cmd *)
#define MSM_CAM_IOCTL_GET_STATS   _IOR(MSM_CAM_IOCTL_MAGIC, 6, struct msm_camera_stats_event_ctrl *)
#define MSM_CAM_IOCTL_GETFRAME   _IOR(MSM_CAM_IOCTL_MAGIC, 7, struct msm_camera_get_frame *)
#define MSM_CAM_IOCTL_ENABLE_VFE   _IOW(MSM_CAM_IOCTL_MAGIC, 8, struct camera_enable_cmd *)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_CAM_IOCTL_CTRL_CMD_DONE   _IOW(MSM_CAM_IOCTL_MAGIC, 9, struct camera_cmd *)
#define MSM_CAM_IOCTL_CONFIG_CMD   _IOW(MSM_CAM_IOCTL_MAGIC, 10, struct camera_cmd *)
#define MSM_CAM_IOCTL_DISABLE_VFE   _IOW(MSM_CAM_IOCTL_MAGIC, 11, struct camera_enable_cmd *)
#define MSM_CAM_IOCTL_PAD_REG_RESET2   _IOW(MSM_CAM_IOCTL_MAGIC, 12, struct camera_enable_cmd *)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_CAM_IOCTL_VFE_APPS_RESET   _IOW(MSM_CAM_IOCTL_MAGIC, 13, struct camera_enable_cmd *)
#define MSM_CAM_IOCTL_RELEASE_FRAME_BUFFER   _IOW(MSM_CAM_IOCTL_MAGIC, 14, struct camera_enable_cmd *)
#define MSM_CAM_IOCTL_RELEASE_STATS_BUFFER   _IOW(MSM_CAM_IOCTL_MAGIC, 15, struct msm_stats_buf *)
#define MSM_CAM_IOCTL_AXI_CONFIG   _IOW(MSM_CAM_IOCTL_MAGIC, 16, struct msm_camera_vfe_cfg_cmd *)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_CAM_IOCTL_GET_PICTURE   _IOW(MSM_CAM_IOCTL_MAGIC, 17, struct msm_camera_ctrl_cmd *)
#define MSM_CAM_IOCTL_SET_CROP   _IOW(MSM_CAM_IOCTL_MAGIC, 18, struct crop_info *)
#define MSM_CAM_IOCTL_PICT_PP   _IOW(MSM_CAM_IOCTL_MAGIC, 19, uint8_t *)
#define MSM_CAM_IOCTL_PICT_PP_DONE   _IOW(MSM_CAM_IOCTL_MAGIC, 20, struct msm_snapshot_pp_status *)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_CAM_IOCTL_SENSOR_IO_CFG   _IOW(MSM_CAM_IOCTL_MAGIC, 21, struct sensor_cfg_data *)
#define MSM_CAM_IOCTL_FLASH_LED_CFG   _IOW(MSM_CAM_IOCTL_MAGIC, 22, unsigned *)
#define MSM_CAM_IOCTL_UNBLOCK_POLL_FRAME   _IO(MSM_CAM_IOCTL_MAGIC, 23)
#define MSM_CAM_IOCTL_CTRL_COMMAND_2   _IOW(MSM_CAM_IOCTL_MAGIC, 24, struct msm_ctrl_cmd *)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_CAM_IOCTL_AF_CTRL   _IOR(MSM_CAM_IOCTL_MAGIC, 25, struct msm_ctrl_cmt_t *)
#define MSM_CAM_IOCTL_AF_CTRL_DONE   _IOW(MSM_CAM_IOCTL_MAGIC, 26, struct msm_ctrl_cmt_t *)
#define MSM_CAM_IOCTL_CONFIG_VPE   _IOW(MSM_CAM_IOCTL_MAGIC, 27, struct msm_camera_vpe_cfg_cmd *)
#define MSM_CAM_IOCTL_AXI_VPE_CONFIG   _IOW(MSM_CAM_IOCTL_MAGIC, 28, struct msm_camera_vpe_cfg_cmd *)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_CAM_IOCTL_STROBE_FLASH_CFG   _IOW(MSM_CAM_IOCTL_MAGIC, 29, uint32_t *)
#define MSM_CAM_IOCTL_STROBE_FLASH_CHARGE   _IOW(MSM_CAM_IOCTL_MAGIC, 30, uint32_t *)
#define MSM_CAM_IOCTL_STROBE_FLASH_RELEASE   _IO(MSM_CAM_IOCTL_MAGIC, 31)
#define MSM_CAM_IOCTL_FLASH_CTRL   _IOW(MSM_CAM_IOCTL_MAGIC, 32, struct flash_ctrl_data *)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_CAM_IOCTL_ERROR_CONFIG   _IOW(MSM_CAM_IOCTL_MAGIC, 33, uint32_t *)
#define MSM_CAM_IOCTL_ABORT_CAPTURE   _IO(MSM_CAM_IOCTL_MAGIC, 34)
#define MSM_CAM_IOCTL_SET_FD_ROI   _IOW(MSM_CAM_IOCTL_MAGIC, 35, struct fd_roi_info *)
#define MSM_CAM_IOCTL_GET_CAMERA_INFO   _IOR(MSM_CAM_IOCTL_MAGIC, 36, struct msm_camera_info *)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_CAM_IOCTL_PUT_ST_FRAME   _IOW(MSM_CAM_IOCTL_MAGIC, 37, struct msm_camera_st_frame *)
#define MSM_CAM_IOCTL_SET_CONFIG_CAMERA_ZSL   _IOW(MSM_CAM_IOCTL_MAGIC, 41, bool *)
#define MSM_CAM_IOCTL_EFFECT_STATE_CFG   _IOW(MSM_CAM_IOCTL_MAGIC, 43, int32_t *)
#define MSM_CAMERA_LED_OFF 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_CAMERA_LED_LOW 1
#define MSM_CAMERA_LED_HIGH 2
#define MSM_CAMERA_STROBE_FLASH_NONE 0
#define MSM_CAMERA_STROBE_FLASH_XENON 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PP_SNAP 0x01
#define PP_RAW_SNAP ((0x01)<<1)
#define PP_PREV ((0x01)<<2)
#define PP_MASK (PP_SNAP|PP_RAW_SNAP|PP_PREV)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_CAM_CTRL_CMD_DONE 0
#define MSM_CAM_SENSOR_VFE_CMD 1
struct msm_ctrl_cmd {
 uint16_t type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t length;
 void *value;
 uint16_t status;
 uint32_t timeout_ms;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int resp_fd;
};
struct msm_cam_evt_msg {
 unsigned short type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short msg_id;
 unsigned int len;
 uint32_t frame_id;
 void *data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_isp_evt_msg {
 unsigned short type;
 unsigned short msg_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int len;
 uint8_t data[48];
};
struct msm_vpe_evt_msg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short type;
 unsigned short msg_id;
 unsigned int len;
 uint32_t frame_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *data;
};
struct msm_isp_stats_event_ctrl {
 unsigned short resptype;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct msm_isp_evt_msg isp_msg;
 struct msm_ctrl_cmd ctrl;
 } isp_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define MSM_CAM_RESP_CTRL 0
#define MSM_CAM_RESP_STAT_EVT_MSG 1
#define MSM_CAM_RESP_STEREO_OP_1 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_CAM_RESP_STEREO_OP_2 3
#define MSM_CAM_RESP_V4L2 4
#define MSM_CAM_RESP_MAX 5
struct msm_stats_event_ctrl {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int resptype;
 int timeout_ms;
 struct msm_ctrl_cmd ctrl_cmd;
 struct msm_cam_evt_msg stats_event;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_camera_cfg_cmd {
 uint16_t cfg_type;
 uint16_t cmd_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t queue;
 uint16_t length;
 void *value;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_GENERAL 0
#define CMD_AXI_CFG_OUT1 1
#define CMD_AXI_CFG_SNAP_O1_AND_O2 2
#define CMD_AXI_CFG_OUT2 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_PICT_T_AXI_CFG 4
#define CMD_PICT_M_AXI_CFG 5
#define CMD_RAW_PICT_AXI_CFG 6
#define CMD_FRAME_BUF_RELEASE 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_PREV_BUF_CFG 8
#define CMD_SNAP_BUF_RELEASE 9
#define CMD_SNAP_BUF_CFG 10
#define CMD_STATS_DISABLE 11
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_STATS_AEC_AWB_ENABLE 12
#define CMD_STATS_AF_ENABLE 13
#define CMD_STATS_AEC_ENABLE 14
#define CMD_STATS_AWB_ENABLE 15
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_STATS_ENABLE 16
#define CMD_STATS_AXI_CFG 17
#define CMD_STATS_AEC_AXI_CFG 18
#define CMD_STATS_AF_AXI_CFG 19
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_STATS_AWB_AXI_CFG 20
#define CMD_STATS_RS_AXI_CFG 21
#define CMD_STATS_CS_AXI_CFG 22
#define CMD_STATS_IHIST_AXI_CFG 23
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_STATS_SKIN_AXI_CFG 24
#define CMD_STATS_BUF_RELEASE 25
#define CMD_STATS_AEC_BUF_RELEASE 26
#define CMD_STATS_AF_BUF_RELEASE 27
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_STATS_AWB_BUF_RELEASE 28
#define CMD_STATS_RS_BUF_RELEASE 29
#define CMD_STATS_CS_BUF_RELEASE 30
#define CMD_STATS_IHIST_BUF_RELEASE 31
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_STATS_SKIN_BUF_RELEASE 32
#define UPDATE_STATS_INVALID 33
#define CMD_AXI_CFG_SNAP_GEMINI 34
#define CMD_AXI_CFG_SNAP 35
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_AXI_CFG_PREVIEW 36
#define CMD_AXI_CFG_VIDEO 37
#define CMD_STATS_IHIST_ENABLE 38
#define CMD_STATS_RS_ENABLE 39
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_STATS_CS_ENABLE 40
#define CMD_VPE 41
#define CMD_AXI_CFG_VPE 42
#define CMD_AXI_CFG_SNAP_VPE 43
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_AXI_CFG_SNAP_THUMB_VPE 44
struct msm_vfe_cfg_cmd {
 int cmd_type;
 uint16_t length;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *value;
};
struct msm_vpe_cfg_cmd {
 int cmd_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t length;
 void *value;
};
#define MAX_CAMERA_ENABLE_NAME_LEN 32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct camera_enable_cmd {
 char name[MAX_CAMERA_ENABLE_NAME_LEN];
};
#define MSM_PMEM_OUTPUT1 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_PMEM_OUTPUT2 1
#define MSM_PMEM_OUTPUT1_OUTPUT2 2
#define MSM_PMEM_THUMBNAIL 3
#define MSM_PMEM_MAINIMG 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_PMEM_RAW_MAINIMG 5
#define MSM_PMEM_AEC_AWB 6
#define MSM_PMEM_AF 7
#define MSM_PMEM_AEC 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_PMEM_AWB 9
#define MSM_PMEM_RS 10
#define MSM_PMEM_CS 11
#define MSM_PMEM_IHIST 12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_PMEM_SKIN 13
#define MSM_PMEM_VIDEO 14
#define MSM_PMEM_PREVIEW 15
#define MSM_PMEM_VIDEO_VPE 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_PMEM_C2D 17
#define MSM_PMEM_MAINIMG_VPE 18
#define MSM_PMEM_THUMBNAIL_VPE 19
#define MSM_PMEM_MAX 20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STAT_AEAW 0
#define STAT_AEC 1
#define STAT_AF 2
#define STAT_AWB 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STAT_RS 4
#define STAT_CS 5
#define STAT_IHIST 6
#define STAT_SKIN 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STAT_MAX 8
#define FRAME_PREVIEW_OUTPUT1 0
#define FRAME_PREVIEW_OUTPUT2 1
#define FRAME_SNAPSHOT 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FRAME_THUMBNAIL 3
#define FRAME_RAW_SNAPSHOT 4
#define FRAME_MAX 5
struct msm_pmem_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int type;
 int fd;
 void *vaddr;
 uint32_t offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t len;
 uint32_t y_off;
 uint32_t cbcr_off;
 uint8_t active;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct outputCfg {
 uint32_t height;
 uint32_t width;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t window_height_firstline;
 uint32_t window_height_lastline;
};
#define OUTPUT_1 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OUTPUT_2 1
#define OUTPUT_1_AND_2 2  
#define OUTPUT_1_AND_3 3  
#define CAMIF_TO_AXI_VIA_OUTPUT_2 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OUTPUT_1_AND_CAMIF_TO_AXI_VIA_OUTPUT_2 5
#define OUTPUT_2_AND_CAMIF_TO_AXI_VIA_OUTPUT_1 6
#define LAST_AXI_OUTPUT_MODE_ENUM = OUTPUT_2_AND_CAMIF_TO_AXI_VIA_OUTPUT_1 7
#define MSM_FRAME_PREV_1 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_FRAME_PREV_2 1
#define MSM_FRAME_ENC 2
#define OUTPUT_TYPE_P (1<<0)
#define OUTPUT_TYPE_T (1<<1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OUTPUT_TYPE_S (1<<2)
#define OUTPUT_TYPE_V (1<<3)
#define OUTPUT_TYPE_L (1<<4)
#define OUTPUT_TYPE_ST_L (1<<5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OUTPUT_TYPE_ST_R (1<<6)
#define OUTPUT_TYPE_ST_D (1<<7)
struct fd_roi_info {
 void *info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int info_len;
};
struct msm_frame {
 struct timespec ts;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int path;
 int type;
 unsigned long buffer;
 uint32_t phy_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t y_off;
 uint32_t cbcr_off;
 int fd;
 void *cropinfo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int croplen;
 uint32_t error_code;
 struct fd_roi_info roi_info;
 uint32_t frame_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum msm_st_frame_packing {
 SIDE_BY_SIDE_HALF,
 SIDE_BY_SIDE_FULL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TOP_DOWN_HALF,
 TOP_DOWN_FULL,
};
struct msm_st_crop {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t in_w;
 uint32_t in_h;
 uint32_t out_w;
 uint32_t out_h;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_st_half {
 uint32_t buf_y_off;
 uint32_t buf_cbcr_off;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t buf_y_stride;
 uint32_t buf_cbcr_stride;
 uint32_t pix_x_off;
 uint32_t pix_y_off;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct msm_st_crop stCropInfo;
};
struct msm_st_frame {
 struct msm_frame buf_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int type;
 enum msm_st_frame_packing packing;
 struct msm_st_half L;
 struct msm_st_half R;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int frame_id;
};
#define MSM_CAMERA_ERR_MASK (0xFFFFFFFF & 1)
struct msm_stats_buf {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int type;
 unsigned long buffer;
 int fd;
 uint32_t frame_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define MSM_V4L2_VID_CAP_TYPE 0
#define MSM_V4L2_STREAM_ON 1
#define MSM_V4L2_STREAM_OFF 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_V4L2_SNAPSHOT 3
#define MSM_V4L2_QUERY_CTRL 4
#define MSM_V4L2_GET_CTRL 5
#define MSM_V4L2_SET_CTRL 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_V4L2_QUERY 7
#define MSM_V4L2_GET_CROP 8
#define MSM_V4L2_SET_CROP 9
#define MSM_V4L2_MAX 10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define V4L2_CAMERA_EXIT 43
struct crop_info {
 void *info;
 int len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_postproc {
 int ftnum;
 struct msm_frame fthumnail;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int fmnum;
 struct msm_frame fmain;
};
enum flash_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 LED_FLASH,
 STROBE_FLASH,
};
enum strobe_flash_ctrl_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 STROBE_FLASH_CTRL_INIT,
 STROBE_FLASH_CTRL_CHARGE,
 STROBE_FLASH_CTRL_RELEASE
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct strobe_flash_ctrl_data {
 enum strobe_flash_ctrl_type type;
 int charge_en;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct flash_ctrl_data {
 int flashtype;
 union {
 int led_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct strobe_flash_ctrl_data strobe_ctrl;
 } ctrl_data;
};
struct msm_snapshot_pp_status {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *status;
};
struct msm_camsensor_info {
 char name[MAX_SENSOR_NAME];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t flash_enabled;
 int8_t total_steps;
};
struct msm_camera_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int num_cameras;
 uint8_t has_3d_support[MAX_SENSOR_NUM];
 uint8_t is_internal_cam[MAX_SENSOR_NUM];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif

