
#include<stdio.h>
#include<string.h>
// int main()
// {
//     int num1=0;
//     int num2=0;
//     int sum =0;
//     scanf("%d%d",&num1,&num2);
//     sum=num1+num2;
//     printf("%d\n",sum);
//     system ("pause");
//     return 0;
// }
    // int main()
    // {
    //     int n =0;
    //     int arr[10]={0};
    //     // const int num = 8;
    //     // printf("%d\n",num);

    // }
    
    // //1.字面变量2.常变量
    // #define max 10//3.#定义的标识符常量
    // int main()
    // {
    // int arr[max]={0};
    // printf("%d\n",max);
    // system ("pause");
    // return 0;
    // }
    //4.枚举常量一一列举 性别 三原色 星期 枚举关键字 enum
    // enum Sex//枚举常量不可改
    // {
    //     male, 
    //     female,
    //     secret,
    // };
    
    //  int main ()
    // {
    //     printf("%d\n",male);
    //     printf("%d\n",female);
    //     system ("pause");
    //     return 0;
    // }
    // int main()
    // {
    //     char arr1[]="abc";//数组
    //     char arr2[]={'a','b','c',0};// \0字符结束标志
        
    //     printf("%s\n",arr1);
    //     printf("%s\n",arr2);
    //     system("pause");
    //     return 0;
    // }
int main ()
{
    char arr1 []= "abc";
    char arr2 []={'a','b','c'};
    printf("%d\n",strlen(arr1));
    printf("%d\n",strlen(arr2));
    system ("pause");
    return 0;
}
//}转义字符 \n换行 \0结束字符 \t水平制表符 \用来转义\ 
//(二进制)位操作 &按位与 |按位或 ^按位异或（对应二进制相同就是0，对应二进制不相同就是1
//011
//101
//0为假 1为真 一假为假 两真为真（&按位与) 
//只要有一个是真就可以（按位或）
//=等于赋值 ==判断为相等
//a=a+10 //a+=10复合赋值符
//单目操作符a+b加号叫双目操作符
//双目操作符
//三目操作符
//C语言表示真假 !差不多逆命题的意思
//sizeof()算空间大小变量类型所占内存大小也可以算数组的大小也可以算个数
//个数=数组大小/每个元素大小