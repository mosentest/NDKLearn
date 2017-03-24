#include <stdio.h>
#include <stdlib.h>

#include "com_moziqi_ndklearn_JniTest.h"

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_moziqi_ndklearn_JniTest
 * Method:    AddStr
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_moziqi_ndklearn_JniTest_AddStr(JNIEnv * env,
		jclass arg, jstring a, jstring b) {
	jstring str = (*env)->NewStringUTF(env, "HelloWorld from JNI !");
	return str;
}

/*
 * Class:     com_moziqi_ndklearn_JniTest
 * Method:    AddInt
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_moziqi_ndklearn_JniTest_AddInt(JNIEnv * env,
		jclass arg, jint a, jint b) {
	return 1;
}

#ifdef __cplusplus
}
#endif
