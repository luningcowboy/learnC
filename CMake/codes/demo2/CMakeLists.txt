cmake_minimum_required (VERSION 2.8)
project(demo2)
# 查找目录下所有的源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)
# 指定生成目标
add_executable(demo2 ${DIR_SRCS})
