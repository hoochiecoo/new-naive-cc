
cmake_minimum_required(VERSION 3.10)
project(MyOpenCVApp)

set(OpenCV_DIR "${CMAKE_SOURCE_DIR}/jniLibs")
find_library(OPENCV_CORE NAMES opencv_core PATHS ${OpenCV_DIR}/arm64-v8a)
find_library(OPENCV_IMGPROC NAMES opencv_imgproc PATHS ${OpenCV_DIR}/arm64-v8a)

add_library(native-lib SHARED native-lib.cpp)
target_link_libraries(native-lib ${OPENCV_CORE} ${OPENCV_IMGPROC} log)
  