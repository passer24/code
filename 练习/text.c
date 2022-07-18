#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch = 'A';//内存
    printf("%c\n",ch);//%c打印字符
    int age =20;
    printf("%d\n",age);//%d打印整形十进制数字%s打印字符
    long num=100;
    printf("%d\n",num);//%f打印小数%p以地址形式打印%x打印十六进制
    float f=5.0;
    printf("%f\n",f);
    double d=3.14;
    printf("%lf\n",d);
    printf("Hello world!\n");
    printf("你好世界！\n");
    printf("大家好\n");
    system("pause");
    return 0;
}