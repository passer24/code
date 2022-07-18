//分支与循环 顺序结构一直下来 选择结构 有方向 循环结构
//分支语句if switch 循环语句（一个分号隔开一个语句）while 
//if表达式语句 if语句一else语句二 多分支if表达式一执行语句一 else if表达式二执行语句二 else 语句三 则可以执行一个语句
#include<stdio.h>
// int main ()
// {
//     int age=100;
//     if(age<18)//不加分号
//         printf("未成年\n");
//     else
//     {
//         if(age>=18&&age<28)//重开后先来个if语句&并且来连接两个条件
//             printf("青年\n");
//         else if (age>=28&&age<50)
//             printf("中年\n");
//         else if (age>=50&&age<90)
//             printf("老年\n");
//         else
//             printf("老不死\n");
//     }
//     system ("pause");
//     return 0;

// }
//  else if (age>=18&age<28)
//         printf("青年\n");
//     else if (age>=28&age<50)
//         printf("中年\n");
//     else if (age>=50&age<90)
//         printf("老年\n");
//     else
//         printf("老不死\n");
//两种形式if else de 语句 0表示假非0表示真 一个大括号一个代码块多语句执行时就使用代码块
//if 跟最近的未匹配的if匹配
// int main()
// {
//     int a=0;
//     int b=2;
//     if(a==1)   
//         {if(b==2)
//             printf("hehe\n");
//         }
//     else
//         printf("haha\n"); 
//     system("pause");
//     return 0;
// }
//if (condition){return x}
// {return y};条件成立return x 不成立return y
//if (conditio)
//      return x;
//  eles return y;正确形式
// int main ()
// {
//     int num=4;//=是赋值
//     if(5==num)//反过来编译可以发现问题把常量放在左边
//     {
//         printf("hehe\n");
//     }
//     system ("pause");
//     return 0;
// }
// int main()      判断该数是否为奇数
// {
//     int a =11;
//     if (a%2)
//     {
//         printf("该数位奇数\n");
//     }
//     else
//         printf("该数是偶数\n");
//     system ("pause");
//     return 0;
// // }
// int main()
// // {
//     int i=1;
//     while(i<=100)
//     {
//         if(i%2!=0)
// //          printf("%d\n",i);
// //          i++;
// //     }
// //     system("pause");
// //     return 0;
// // }
// // {   
// //     int i=1;
// //     while (i<=100)
// //     {
// //         printf("%d",i);
// //         i+=2;
// //     }
// //     system("pause");
// //     return 0;
// // }
// //switch处理多分支的语句
// int main ()
// {
//     int day =1;
//     int n = 1;
//     scanf("%d",&day);
//     switch (day)
//     {
//     case 1 :
//         printf("星期一\n");
//         break;
//     case 2 :
//         printf("星期二\n");
//         break;
//     case 3 :
//         printf("星期三\n");
//         break;
//     case 4 :
//         printf("星期四\n");
//         break;
//     case 5 :
//         printf("星期五\n");
//         break;
//     case 6 :
//         printf("星期六\n");
//         break;
//     case 7 :
//         printf("星期天\n");
//         break;
//     default:没有东西可以匹配时加上一个default
//         printf("输入错误\n");//输入错误 加多一个default
//         break;
//     }
//     system ("pause");
//     return 0;
//}//break跳出循环 相同就可以合并起来 case1：case2：得到一个相同的结果时 合在一起
//循环语句
//while
// int main()
// {   int a=1;
//     while(a<11)//包含两个及两个以上的语句时就要用大括号{}
//     {    
//         printf("%d\n",a);//有break时就直接跳出大循环 continue陷入死循环continue
//          a++;            //continue后的不在执行重新进入while 因为a++在后面所以
//     }                    //陷入死循环 终止本次循环进入下一个循环
//     system ("pause");
//     return 0;
// }
// int main()
// {
    
//     // int ch=0;
//     // while((ch=getchar())!=EOF)//ctrl+z可以结束
//     // {
//     //     putchar(ch);
//     // }
//     int ret=0;
//     int ch=0;
//     char password[20]={0};//输入函数->输入缓冲区123456\n缓冲区剩\n
//     printf("请输入密码：");
//     scanf("%s",password);
//     printf("请确认(Y/N)");
//     while((ch=getchar())!='\n')
//     {
//         ;
//     }//可以用来取消输入

//     ret=getchar();
//     if(ret=='Y')
//         printf("确认成功\n");
//     else
//         printf("取消确认\n");

//     system("pause");
//     return 0;
// }
int main()//还可以做大写变小写之类 先接收在转换后输出类似翻译
{
    int ch=0;
    while((ch=getchar())!=EOF)
    {
        if(ch<'0'||ch>'9')//只输出数字字符
            continue;
        putchar(ch);
    }
    system ("pause");
    return 0;
}