#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	//算法实现 a最大 b次之 c最小
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//int  main()//找出最大公约数
//{
//	int m = 24;
//	int n = 18;
//	scanf_s("%d%d", &m,&n);
//	int r = 0;
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()//计算闰年的个数
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//	/*	if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if (((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()
//{
//
//	int count = 0;
//	int num = 0;
//	for (num = 100; num <= 200; num++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(num); j++)
//		{
//			if (num % j == 0)
//				break;
//		}
//		if (j>sqrt(num))
//		{
//			printf("%d ", j);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum +=flag * 1.0 / i;
//		flag = -flag;//变换符号+-
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//两个是并列的关系，加else就不是了
//			count++;
//	}
//	printf("conut=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()//乘法口诀打印
//{
//	int i = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//2d可以补空格右对齐     -2d左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

void menu()
{
	printf("*****************************\n");
	printf("*****    1play     2exit ****\n");
	printf("*****************************\n");
}

void game()//生成随机数
{
	int ret = 0;
	int guess = 0;
	//拿时间戳设计随机数生成起点(1970.1.1.0.00.00) NULL空指针
	//time_t*
	ret = rand()%100+1;//生成随机数 0~32367
	//printf("%d\n", ret);
	while (1)
	{

		printf("猜数字:>");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}
int main()//猜数字游戏
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择：>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
//int main()//关机指令 多嵌套语句可以用goto比较方便
//{
//	char input[20] = { 0 };
//	//shortdown -s -t
//	//system 执行系统命令
//	system("shortdown -s -t 60");
//again:
//	printf("请注意您的电脑将在一分钟内关机，如输入我是猪，就取消关机\n");
//	scanf_s("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shortdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
