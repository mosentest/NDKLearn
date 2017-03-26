LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := NDKLearn
LOCAL_SRC_FILES := com_moziqi_ndklearn_JniTest.c
#log打印库 http://blog.csdn.net/qiuxiaolong007/article/details/7548580
LOCAL_LDLIBS+= -L$(SYSROOT)/usr/lib -llog
include $(BUILD_SHARED_LIBRARY)