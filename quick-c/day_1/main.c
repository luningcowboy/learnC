#include <stdio.h>
// puts, int, const char*, char , float, printf
void func1(){
    puts("hello world");
    puts("a=");
    int a;
    a = 10;
    int b;
    const char * c = "hello";
    char d = 'C';
    float e = 1.2;
    printf("a=%d,b=%d, c=%s, d=%c, e=%f\n",a, b, c, d,e); // a=10,b=32766
}
// shot, long, int, sizeof
void func2(){
    short int a = 10;
    short int b, c = 99;
    long int m = 102023;
    long int n, p = 562131;
    short a1 = 10;
    short b1, c1 = 99;
    long m1 = 102023;
    long n1, p1 = 562131;
    int e = 10;
    //int:4, short:2, long:8
    //不能用%d输出，编译报错
    //warning: format specifies type 'int' but the argument has type 'unsigned long' [-Wformat]
    printf("int:%lu, short:%lu, long:%lu\n", sizeof e, sizeof(b), sizeof(n));
    //int:4, short:2, long:8
    //sizeof 获取类型占用内存长度，如果是变量可以 sizeof v, sizeof(v)
    //如果是类型sizeof(type)
    printf("int:%lu, short:%lu, long:%lu\n", sizeof(int), sizeof(short), sizeof(long));

}
void func3(){
    // 十进制
    int a = 10;
    short a1 = 10;
    long a2 = 10;
    // 八进制 0开头每位0~7八个数字组成
    int b = 015;
    short b1 = 015;
    long b2 = 015;

    // 十六进制 0X开头,字母A~F
    int c = 0X3A;
    short c1 = 0X3A;
    long c2 = 0X3A;

    short m = 0b1010110; // 二进制
    int n = 02713;
    long l = 0X1DAB83;
    printf("m=%ho, b=%o, c=%lo\n", m, n, l); // 以八进制输出
    printf("m=%hd, b=%d, c=%ld\n", m, n, l); // 以十进制输出
    printf("m=%hx, b=%x, c=%lx\n", m, n, l); // 以16进制小写输出
    printf("m=%hX, b=%X, c=%lX\n", m, n, l); // 以16进制大写输出
}
// short, int, long, unsigned
void func4(){
    short a1 = -10;
    short a2 = -0x2dc9;
    int b1 = 10;
    int b2 = 0174;
    int b3 = 22910;
    long c = (-9) + 12;
    unsigned short a = 12;
    //unsigned b = 1002; 同unsigned int b = 1002;等价
    unsigned int b = 1002;
    unsigned long c1 = 9892320;
    // unsigned 十进制输出
    printf("unsigned short:%hu, unsigned long:%lu, unsigned int=%u", a, c1, b);
}
int main(){

    //func2();
    func4();
    return 0;
}
