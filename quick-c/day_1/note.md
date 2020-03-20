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
