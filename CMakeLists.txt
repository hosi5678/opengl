# CMakeのバージョン指定
cmake_minimum_required(VERSION 3.5)

# CMakeのキャッシュ内にコンパイラのパスを設定
# C++の場合は LANGUAGES CXX を指定して同様に設定する。
set(CMAKE_C_COMPILER /usr/bin/gcc-11 CACHE FILEPATH "C Compiler")

#プロジェクトの指定と言語の指定
project(main LANGUAGES C)

# buildの種類をDebugに指定し、デバッグ情報を含める。
set(CMAKE_BUILD_TYPE Debug)


# Debug情報を含む
set(CMAKE_C_FLAGS_DEBUG "-g")

# targetの名前を決定
add_executable(main main.c)

# sub_dirの付加
add_subdirectory(./opengl_sub_dir)

# sub_dirの名前をtargetに付加
target_link_libraries(main opengl_sub_dir)

# コンパイルオプションの指定
target_compile_options(main PRIVATE -Wall -Wextra)
target_compile_options(main PRIVATE -O2)
target_compile_options(main PRIVATE -std=gnu99)

# ビルドの高速化
target_compile_options(main PRIVATE -pipe)

# 自動的にそのアーキテクチャにそったオプションをつける
target_compile_options(main PRIVATE -march=native)

# ループの展開を行う。
target_compile_options(main PRIVATE -funroll-loops)

# 計算をメモリ上ではなくCPUのレジスタにコピーして行うようにする
target_compile_options(main PRIVATE -fforce-addr)

# CPUの拡張命令セットを使うようにする
target_compile_options(main PRIVATE -msse -msse2 -msse3)
target_compile_options(main PRIVATE -m3dnow)
target_compile_options(main PRIVATE -mfpmath=sse)

# open mp用
target_compile_options(main PRIVATE -fopenmp)

# math.hを使用するためのライブラリのリンク
target_link_libraries(main m)

# openGL用
target_link_libraries(main GL)
target_link_libraries(main GLU)
target_link_libraries(main glut)
target_link_libraries(main glfw)
target_link_libraries(main glfw3)
target_link_libraries(main GLEW)
target_link_libraries(main Xrandr)
target_link_libraries(main Xinerama)
target_link_libraries(main Xi)
target_link_libraries(main Xxf86vm)
target_link_libraries(main X11)
target_link_libraries(main rt)
target_link_libraries(main dl)
target_link_libraries(main Xmu)
target_link_libraries(main Xext)
target_link_libraries(main Xcursor)



# カスタムターゲットの定義
add_custom_target(run_main
    COMMAND $<TARGET_FILE:main>
    DEPENDS main
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# エイリアスの定義,自動的に実行する
# add_custom_target(run ALL DEPENDS run_main)
