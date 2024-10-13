# cmakeのversion 指定
cmake_minimum_required(VERSION 3.5)

# projectと言語の設定
project(opengl_sub_dir LANGUAGES C)



# source filesの検索
file(GLOB_RECURSE SOURCES "./src/*.c")

# target名を決定し、source filesをtargetに付加
add_library(opengl_sub_dir STATIC ${SOURCES})

# include files(header files)をtargetに付加
target_include_directories(opengl_sub_dir INTERFACE ./include)

# math.hをtargetに付加
target_link_libraries(opengl_sub_dir m)

# opensopengl_sub_dir
target_link_libraries(opengl_sub_dir GL)
target_link_libraries(opengl_sub_dir GLU)
target_link_libraries(opengl_sub_dir glut)
target_link_libraries(opengl_sub_dir glfw)
target_link_libraries(opengl_sub_dir glfw3)
target_link_libraries(opengl_sub_dir GLEW)
target_link_libraries(opengl_sub_dir Xrandr)
target_link_libraries(opengl_sub_dir Xinerama)
target_link_libraries(opengl_sub_dir Xi)
target_link_libraries(opengl_sub_dir Xxf86vm)
target_link_libraries(opengl_sub_dir X11)
target_link_libraries(opengl_sub_dir rt)
target_link_libraries(opengl_sub_dir dl)
target_link_libraries(opengl_sub_dir Xext)
target_link_libraries(opengl_sub_dir Xcursor)
