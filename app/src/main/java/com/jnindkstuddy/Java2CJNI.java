package com.jnindkstuddy;

/**
 * Created by Administrator on 2018/8/16.
 * 生成对应头文件所在的包名+类名
 * javah -classpath F:\project7\JNINDKStuddy\app\build\intermediates\classes\debug -jni com.jnindkstuddy.Java2CJNI
 */

public class Java2CJNI {

    static {
        //System的S是大写
        System.loadLibrary("Java2C");
    }

    //这个就是我们将来需要调用的方法
    public native String java2C();
}
