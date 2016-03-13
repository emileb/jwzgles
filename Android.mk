
LOCAL_PATH := $(call my-dir)


include $(CLEAR_VARS)


LOCAL_MODULE    := jwzgles

LOCAL_CFLAGS :=   -O2  -DHAVE_ANDROID -DHAVE_JWZGLES

LOCAL_LDLIBS += -lGLESv1_CM -lEGL

LOCAL_LDLIBS += -llog

LOCAL_SRC_FILES =  jwzgles.c

LOCAL_LDLIBS :=  -ldl -llog

include $(BUILD_STATIC_LIBRARY)








