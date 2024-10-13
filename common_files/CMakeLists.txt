# cmakeのversion 指定
cmake_minimum_required(VERSION 3.5)

# projectと言語の設定
project(opengl_common_lib LANGUAGES C)

# source filesの検索
file(GLOB_RECURSE SOURCES "./src/*.c")

# target名を決定し、source filesをtargetに付加
add_library(opengl_common_lib STATIC ${SOURCES})

# include files(header files)をtargetに付加
target_include_directories(opengl_common_lib INTERFACE ./include)

# math.hをtargetに付加
target_link_libraries(opengl_common_lib m)

# opengl
target_link_libraries(opengl_common_lib GL)
target_link_libraries(opengl_common_lib glut)
target_link_libraries(opengl_common_lib glfw)
target_link_libraries(opengl_common_lib glfw3)
target_link_libraries(opengl_common_lib GLEW)
target_link_libraries(opengl_common_lib Xrandr)
target_link_libraries(opengl_common_lib Xinerama)
target_link_libraries(opengl_common_lib Xi)
target_link_libraries(opengl_common_lib Xxf86vm)
target_link_libraries(opengl_common_lib X11)
target_link_libraries(opengl_common_lib rt)
target_link_libraries(opengl_common_lib dl)
target_link_libraries(opengl_common_lib Xmu)
