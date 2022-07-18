//for循环
//while
//有初始化再判断再调整 太长距离太远难以操作while的弊端
//foe(表达式1;表达式2;表达式3)循环语句
#include<stdio.h>
int main()
{
    int a=0;
    for(a=1;a<11;a++)//初始化判断和调整合在一起 简单明了
    {
        if(5==a)
            break;//跳出循环在while中是一个意思
        printf("%d",a);
    }
    system("pause");
    return 0;
}