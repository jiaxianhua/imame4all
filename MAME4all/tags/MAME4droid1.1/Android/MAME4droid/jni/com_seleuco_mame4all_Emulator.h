/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_seleuco_mame4all_Emulator */

#ifndef _Included_com_seleuco_mame4all_Emulator
#define _Included_com_seleuco_mame4all_Emulator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_seleuco_mame4all_Emulator
 * Method:    init
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_seleuco_mame4all_Emulator_init
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_seleuco_mame4all_Emulator
 * Method:    pauseEmulation
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_seleuco_mame4all_Emulator_pauseEmulation
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_seleuco_mame4all_Emulator
 * Method:    setPadData
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_seleuco_mame4all_Emulator_setPadData
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_seleuco_mame4all_Emulator
 * Method:    getValue
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_seleuco_mame4all_Emulator_getValue
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_seleuco_mame4all_Emulator
 * Method:    setValue
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_seleuco_mame4all_Emulator_setValue
  (JNIEnv *, jclass, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
