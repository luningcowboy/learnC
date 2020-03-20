#include <stdio.h>
int main(){
    puts("hello world");
    puts("a=");
    int a;
    a = 10;
    int b;
    printf("a=%d,b=%d\n",a, b); // a=10,b=32766
    return 0;
}
