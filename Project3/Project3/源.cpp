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
//	//�㷨ʵ�� a��� b��֮ c��С
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
//int  main()//�ҳ����Լ��
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
//int main()//��������ĸ���
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
//		flag = -flag;//�任����+-
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
//		if (i / 10 == 9)//�����ǲ��еĹ�ϵ����else�Ͳ�����
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
//int main()//�˷��ھ���ӡ
//{
//	int i = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//2d���Բ��ո��Ҷ���     -2d�����
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

void game()//���������
{
	int ret = 0;
	int guess = 0;
	//��ʱ������������������(1970.1.1.0.00.00) NULL��ָ��
	//time_t*
	ret = rand()%100+1;//��������� 0~32367
	//printf("%d\n", ret);
	while (1)
	{

		printf("������:>");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}
int main()//��������Ϸ
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
//int main()//�ػ�ָ�� ��Ƕ����������goto�ȽϷ���
//{
//	char input[20] = { 0 };
//	//shortdown -s -t
//	//system ִ��ϵͳ����
//	system("shortdown -s -t 60");
//again:
//	printf("��ע�����ĵ��Խ���һ�����ڹػ�����������������ȡ���ػ�\n");
//	scanf_s("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shortdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
