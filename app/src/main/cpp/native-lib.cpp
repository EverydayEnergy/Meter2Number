#include <jni.h>
#include <string>

extern "C"
jstring
Java_tw_com_everydayenergy_meter2number_Meter2Number_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
