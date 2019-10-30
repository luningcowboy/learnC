# 查找当前目录下所有的源文件
# 并添加到DIR_LIB_SRCS变量中
aux_source_directory(. DIR_LIB_SRCS)
# 指定生成MathFunctions链接库
add_library(MathFunctions ${DIR_LIB_SRCS})
