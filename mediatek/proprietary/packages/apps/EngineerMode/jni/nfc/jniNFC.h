/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mediatek_apst_host_sync_vcard_Inative */

#ifndef _Included_com_mediatek_apst_host_sync_vcard_VCFInterfaceNative
#define _Included_com_mediatek_apst_host_sync_vcard_VCFInterfaceNative

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT int JNICALL Java_com_mediatek_engineermode_nfc_NfcNativeCallClass_initNfcDriver
(JNIEnv * env, jclass jc);

JNIEXPORT void JNICALL Java_com_mediatek_engineermode_nfc_NfcNativeCallClass_deinitNfcDriver
(JNIEnv * env, jclass jc);

JNIEXPORT jobject JNICALL Java_com_mediatek_engineermode_nfc_NfcNativeCallClass_getSettings
(JNIEnv * env, jclass jc, jobject req_j);

JNIEXPORT jobject JNICALL Java_com_mediatek_engineermode_nfc_NfcNativeCallClass_getRegisterNotif
(JNIEnv * env, jclass jc, jobject req_j);

JNIEXPORT jobject JNICALL Java_com_mediatek_engineermode_nfc_NfcNativeCallClass_getDiscoveryNotif
(JNIEnv * env, jclass jc, jobject req_j);

JNIEXPORT jobject JNICALL Java_com_mediatek_engineermode_nfc_NfcNativeCallClass_setSEOption
(JNIEnv * env, jclass jc, jobject req_j);

JNIEXPORT jobject JNICALL Java_com_mediatek_engineermode_nfc_NfcNativeCallClass_testEntry
(JNIEnv * env, jclass jc, jobject req_j);

//define according java side.
#define TEST_ID_ALWAYSE_ON_WITH 1001
#define TEST_ID_ALWAYSE_ON_WO 1002
#define TEST_ID_CARD_EMUL_MODE  1003
#define TEST_ID_READER_MODE  1004
#define TEST_ID_P2P_MODE  1005
#define TEST_ID_SWP_SELF  1006
#define TEST_ID_ANTENNA_SELF  1007
#define TEST_ID_UID_RW 1008

#ifdef __cplusplus
}
#endif



#endif