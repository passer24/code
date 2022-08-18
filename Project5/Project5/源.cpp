#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"//自己设计的函数用“” 库函数用<> 分模块写代码 编译器把add里的全部拷贝过来
#include<string.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}
//函数递归 函数自己调用自己
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//

//void print(int n)
//{
//	if (n > 9)//找到条件限制递归不然会栈溢出
//	{
//		print(n/ 10);//反复调用 直接调用（关键条件）两个必要条件 要越来越接近上面的条件
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);//1234
//	print(num);
//	return 0;
//}

//int my_strlen(char* str)//计算字符串长度
//{
//	int count = 0;
//	while (*str!='\0')//while、if后面不加分号
//	{
//		
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)//不用临时变量算字符串长度
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//	
//}
////大事化小 my_strlen
//
//
//int main()
//{
//	char arr[] = "bit";//bit\0字符串的最终形式
//	//int len = strlen(arr);
//	//printf("len=%d", len);
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//int Facl(int n) n的阶乘
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Facl(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int feibo(int n) 计算次数太多了
//{
//	if (n <= 2)
//		return 1;
//	else
//		return feibo(n-1) + feibo(n - 2);
//}

//int feibo(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	/*int count = 0;*/
//	int ret = 0;
//	int n = 0;
//	scanf_s("%d", &n);
//	ret = feibo(n);
//	printf("%d\n", ret);
//	/*printf("%d\n", count);*/
//	return 0;
//}

//void text(int n)
//{
//	if (n < 10000)
//	{
//		text(n + 1);
//	}
//}
//int main()
//{
//	text(1);
//	return 0;
//}
//汉诺塔问题 青蛙跳台阶问题
//void hanut()
//{
//	
//}
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//               //开始    辅助    目标
//void move(int n, char a, char b, char c)
//{
//    if (n == 1)
//        printf("\t%c->%c\n", a, c);    //当n只有1个的时候直接从a移动到c 
//    else
//    {             //a起始 c辅助 b目标 就等于调用了自己一遍
//        move(n - 1, a, c, b);            //把a的n-1个盘子通过c移动到b 
//        printf("\t%c->%c\n", a, c);   //把a的最后1个盘(最大的盘)移动到c 
//        move(n - 1, b, a, c);            //吧b上面的n-1个盘通过a移动到c 
//    }
//}
//
//int main()
//{
//    int n;
//    printf("请输入要移动的块数：");
//    scanf_s("%d", &n);
//    move(n, 'a', 'b', 'c');
//}

//int tiao(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 1)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	
//	return c;
//}
int tiao(int n)//这是递归的写法
{
	if (n < 2)
		return 1;
	else
		return tiao(n - 1) + tiao(n - 2);
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入总台阶：");
	scanf_s("%d", &n);
	ret=tiao(n);
	printf("一共有%d跳法", ret);
	return 0;
}