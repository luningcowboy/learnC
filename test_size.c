#include <stdio.h>
#include <limits.h>
#include <float.h>

// 函数外定义x, y
int x = 1;
int y = 2;
int add(){
  // 函数内声明x, y 为外部变量
  extern int x;
  extern int y;

  x = 1;
  y = 2;
  return x + y;
}
int addTwoNum();
int main(){
  printf("int size = %lu \n", sizeof(int));
  printf("float size = %lu \n", sizeof(float));
  printf("float Max = %E \n", FLT_MAX);
  printf("float Min = %E \n", FLT_MIN);
  printf("float 精度 = %d \n", FLT_DIG);
  extern int i; // 声明不是定义
  int j; // 声明，也是定义
  //printf("i=%d\n", i); // 没有定义，直接运行会报错
  printf("j=%d\n", j); //j=1 int的默认值为1, 最好自己指明默认值

  printf("x + y = %d \n", add());
  printf("x + y = %d \n", addTwoNum());
}
// 编译命令
//gcc add.c test_size.c -o test_size.out
