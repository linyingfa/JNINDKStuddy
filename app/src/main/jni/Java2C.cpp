//
// Created by Administrator on 2018/8/16.
//com.jnindkstuddy
//com.ctrip.ndktest


#include <jni.h>
#include "com_jnindkstuddy_Java2CJNI.h"

JNIEXPORT jstring JNICALL Java_com_jnindkstuddy_Java2CJNI_java2C(JNIEnv* env, jobject instance)
{
//    return (*env)->NewStringUTF(env, "I am From Native C");
//    return (env)->NewStringUTF(env, "I am From Native C");
    return (env)->NewStringUTF("I am From Native C");
}