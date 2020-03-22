1. hello world
```c
#include <stdio.h>
int main(){
    puts("hello world");
    return 0;
}
```
2. run:
```shell
gcc main.c
./a.out
```
3. `puts("strings");` 输出一个字符串
4. `printf("a=%d\n",10);`
5. 定义变量：
```c
int a;
a = 10;
int b;
printf("a=%d, b=%b", a, b);//a=10,b=32766
```
连续定义:
```c
int a, b, c;
float m = 1.1, n= 2.1;
char p, q = '@';
```
6. 数据类型:`int,float,string,char,long,double,void`
7. 原码: 将一个整数转化成二进制，就是其原码。原码就是整数的二进制形式。
8. 反码: 对于正数反码就是其原码，负数的反码是将原码中符号位之外的所有位取反，0->1,1->0
9. 补码: 
- 正数: 补码就是其原码
- 负数: 其反码+1
