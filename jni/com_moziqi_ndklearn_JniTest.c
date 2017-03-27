#include <stdio.h>
#include <stdlib.h>

#include "com_moziqi_ndklearn_JniTest.h"
#include "com_moziqi_ndk_utils.h"

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_moziqi_ndklearn_JniTest
 * Method:    AddStr
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_moziqi_ndklearn_JniTest_AddStr(JNIEnv * env,
		jclass obj, jstring jst1, jstring jst2) {
	jstring str = (*env)->NewStringUTF(env, "HelloWorld from JNI !");
	LOGE("aaaa");
	const char *str1 = (*env)->GetStringUTFChars(env, jst1, 0);
	const char *str2 = (*env)->GetStringUTFChars(env, jst2, 0);
	jstring result = (*env)->NewStringUTF(env, str1);
	//释放内存
	(*env)->ReleaseStringUTFChars(env, jst1, str1);
	(*env)->ReleaseStringUTFChars(env, jst2, str2);
	//jintArray
	jintArray javaArray;
	javaArray = (*env)->NewIntArray(env, 10);
	if (0 != javaArray) {
		LOGE("aaaa");
	}

	return result;
}

/*
 * Class:     com_moziqi_ndklearn_JniTest
 * Method:    AddInt
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_moziqi_ndklearn_JniTest_AddInt(JNIEnv * env,
		jclass obj, jint jint1, jint jint2) {
	return 1;
}

#ifdef __cplusplus
}
#endif
