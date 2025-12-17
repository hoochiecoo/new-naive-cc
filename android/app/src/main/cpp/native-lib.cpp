
#include <jni.h>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_demo_MainActivity_stringFromJNI(JNIEnv *env, jobject /* this */) {
    cv::Mat mat = cv::Mat::eye(3,3,CV_32F);
    return env->NewStringUTF("Hello from native OpenCV!");
}
  