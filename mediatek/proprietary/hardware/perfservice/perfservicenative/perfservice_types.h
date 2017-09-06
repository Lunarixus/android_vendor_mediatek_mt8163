/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 *
 * MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */

#ifndef ANDROID_PERFSERVICE_TYPES_H
#define ANDROID_PERFSERVICE_TYPES_H

/* Scenarios, MUST align with PerfService.java */
enum {
    SCN_NONE            = 0,
    SCN_APP_SWITCH      = 1,  /* apply both for */
    SCN_APP_ROTATE      = 2,
    SCN_APP_TOUCH       = 3,
    SCN_SW_SNOOP_BOOST  = 4, // SCN_DONT_USE1
    SCN_SW_FRAME_UPDATE = 5,
    SCN_APP_LAUNCH      = 6,
    SCN_GAMING          = 7,
    SCN_NUM             = 8,
    SCN_APP_RUN_BASE = SCN_NUM,
};

enum {
    STATE_PAUSED    = 0,
    STATE_RESUMED   = 1,
    STATE_DESTORYED = 2,
    STATE_DEAD      = 3,
    STATE_STOPPED   = 4,
    STATE_NUM       = 5,
};

enum {
    CMD_GET_CPU_FREQ_LEVEL_COUNT        = 0,
    CMD_GET_CPU_FREQ_LITTLE_LEVEL_COUNT = 1,
    CMD_GET_CPU_FREQ_BIG_LEVEL_COUNT    = 2,
    CMD_GET_GPU_FREQ_LEVEL_COUNT        = 3,
    CMD_GET_MEM_FREQ_LEVEL_COUNT        = 4,
    CMD_GET_PERF_INDEX_MIN              = 5,
    CMD_GET_PERF_INDEX_MAX              = 6,
    CMD_GET_PERF_NORMALIZED_INDEX_MAX   = 7,
};

enum {
    CMD_SET_CPU_CORE_MIN            = 0,
    CMD_SET_CPU_CORE_MAX            = 1,
    CMD_SET_CPU_CORE_BIG_LITTLE_MIN = 2,
    CMD_SET_CPU_CORE_BIG_LITTLE_MAX = 3,
    CMD_SET_CPU_FREQ_MIN            = 4,
    CMD_SET_CPU_FREQ_MAX            = 5,
    CMD_SET_CPU_FREQ_BIG_LITTLE_MIN = 6,
    CMD_SET_CPU_FREQ_BIG_LITTLE_MAX = 7,
    CMD_SET_GPU_FREQ_MIN            = 8,
    CMD_SET_GPU_FREQ_MAX            = 9,
    CMD_SET_VCORE                   = 10,
    CMD_SET_SCREEN_OFF_STATE        = 11,
    CMD_SET_CPUFREQ_HISPEED_FREQ    = 12,
    CMD_SET_CPUFREQ_MIN_SAMPLE_TIME = 13,
    CMD_SET_CPUFREQ_ABOVE_HISPEED_DELAY = 14,
    CMD_SET_CLUSTER_CPU_CORE_MIN    = 15,
    CMD_SET_CLUSTER_CPU_CORE_MAX    = 16,
    CMD_SET_CLUSTER_CPU_FREQ_MIN    = 17,
    CMD_SET_CLUSTER_CPU_FREQ_MAX    = 18,
    CMD_SET_ROOT_CLUSTER            = 19,
    CMD_SET_CPU_UP_THRESHOLD        = 20,
    CMD_SET_CPU_DOWN_THRESHOLD      = 21,
    CMD_SET_PERF_INDEX              = 22,
    CMD_SET_NORMALIZED_PERF_INDEX   = 23,
};

enum {
    SCREEN_OFF_DISABLE      = 0,
    SCREEN_OFF_ENABLE       = 1,
    SCREEN_OFF_WAIT_RESTORE = 2,
};

enum {
    DISPLAY_TYPE_GAME   = 0,
    DISPLAY_TYPE_OTHERS = 1,
    DISPLAY_TYPE_VP     = 2,
};

enum {
    NOTIFY_USER_TYPE_PID = 0,
    NOTIFY_USER_TYPE_FRAME_UPDATE = 1,
    NOTIFY_USER_TYPE_DISPLAY_TYPE = 2,
    NOTIFY_USER_TYPE_SCENARIO_ON  = 3,
    NOTIFY_USER_TYPE_SCENARIO_OFF = 4,
};

#endif // ANDROID_PERFSERVICE_H