#include<stdio.h>
#include<string.h>
// int main()
// {
//     int a=10;//申请四个字节空间
//     //printf("%p\n",&a);
//     int *p=&a;//*是告诉我们p是指针变量
//     //printf("%p\n",p);
//     *p=20;//*解引用操作符
//     printf("%d\n",a);
//     system ("pause");
//     return 0;
// }
struct Book
{
    char name[20];//C语言设计
    short price;//55
};
//创建一个结构体类型 利用结构体类型创建一个变量


int main()
{
    struct Book b1={"C语言程序设计",55};
    strcpy(b1.name,"c++");//strcpy字符拷贝 放在结构体设计的下面进行更改
    printf("书名：%s\n",b1.name);
    printf("价格：%d\n",b1.price);
    b1.price= 15;
    
    printf("修改后价格：%d\n",b1.price);
    system ("pause");
    return 0;
}
    //.应用在结构体变量找成员
    //->结构体指针变量找成员