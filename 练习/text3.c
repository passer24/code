#include<stdio.h>

// int Max(int x,int y)
// {
//     if (x>y)
//         return x;
//     else
//         return y; 
    
// }
// int main()
// {
//     int num2=20;
//     int num1=10;
//     int max=0;
//     max=Max(num1,num2);
//     printf("max=%d\n",max);
//     system("pause");
//     return 0;
//}
// int main ()
// {
//     int arr[]={1,2,3,4,5,6,};
//     int a = 10;
//     printf("%d\n",sizeof a );
//     printf("%d\n",sizeof(arr));
//     printf("%d\n",sizeof(int));
//     printf("%d\n",sizeof (arr)/sizeof(arr[0]));
//     system ("pause");
//     return 0;
// }
//源码、反码、补码 源码符号位不变其他位按位取反得到反码、反码加一得到补码
//printf打印的是源码
// int main ()
// {
//     int a=10;
//     //int b=a++;
//     //int b=++a;//前置++，先++，再使用
//     int b=a--;
//     printf("a=%d\n,b=%d\n",a,b);//后置++，先使用再++
//     system ("pause");
//     return 0;
// }
//()里面放类型强制类型转换
//关系操作符
//常见关键字 int float break停止循环
// int main()
// {
//     int a=10;//局部变量-自动变量（auto）//signed int 省略signed unsigned无符号
//     return 0;
// }
//存储数据 寄存器 高速缓存 内存 硬盘(越前访问越快，体积越小越贵)CPU快去寄存器拿
//typedef类型重新定义 static修饰局部变量 局部变量生命周期变长 静态局部变量
//stati修饰全局变量 改变变量的作用域让它静态全局变量只可在源文件内部使用
//static修饰函数也是改变其链接属性外部变为内部链接属性
// //#define定义标识常量-带参数
// #define MAX(X,Y)(X>Y?X:Y)//宏的定义
// int main()
// {
//     int a=10;
//     int b=20;
//     int max=(a,b);
//     printf("max=%d\n",max);
//     system ("pause");
//     return 0;
// }
//指针
//内存如何产生地址
//32位 32根地址线/数据线 正负电一共有2的32次方种地址一个地址一个字节
//int =10申请四个字节
//64位
int main()
{
    int a=10;
    int *p =&a;//有一种变量是用来存放地址的-指针变量&取地址操作符
    printf("%p\n",&a);
    printf("%p\n",p);
    //*p//*解引用操作符《重点》指针变量大小地址的位数32就是4字节；64就是8字节
    *p=20;
    printf("a=%d\n",a);
    system("pause");
    return 0;
}