cmake_minimum_required (VERSION 2.6)
project (test1)

include_directories(/usr/include/opencv4)
add_executable (test1 main.cpp)

target_link_libraries (test1 opencv_core opencv_highgui opencv_imgproc opencv_imgcodecs opencv_videoio)
