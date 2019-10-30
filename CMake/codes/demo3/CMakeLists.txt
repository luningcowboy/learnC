# 设置CMake最低版本号
cmake_minimum_required(VERSION 2.8)
# 设置项目名称
project(demo3)
# 查找目标目录下所有的文件
# 并将名称保存到DIR_SRCS变量中
aux_source_directory(. DIR_SRCS)
# 添加math子目录
add_subdirectory(math)
# 指定生成目录
add_executable(demo ${DIR_SRCS})
# 添加链接库
target_link_libraries(demo MathFunctions)
