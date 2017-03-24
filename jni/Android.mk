LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := NDKLearn
LOCAL_SRC_FILES := com_moziqi_ndklearn_JniTest.c
include $(BUILD_SHARED_LIBRARY)