#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int i = 0;
//	int b = 1;
//	for (i=a;i>1;i--)
//	{
//		b = b * i;
//	}
//	printf("�׳�b=%d", b);
//	return 0;
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	int i;
//	int b = 1;
//	for (i = a; i > 1; i--) {
//		b *= i;
//		printf("%d\n", b);
//	}
//	printf("%d", b);
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = a > b ? a : b;//��Ŀ�����
//	printf("%d\n", c);
//}

//int main()
////{
////	switch()//�������������
////	return 0;
////}
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int b = a % 4;
//	printf("������%d", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	double c = (1.0)*a / b;
//	printf("%10.8lf", c);
//
//	return 0;
//}

//int main()                  �����ۼ�
//{
//	int i = 1;
//	int a = 0;
//	scanf_s("%d", &a);
//	int sum = 0;
//	while (i <= a)      if while for  �мǲ��ӷֺ�  
//	{
//		sum += i;
//		i++;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int sum = 0;
//	do {
//		sum += i;
//		i++;
//	} while (i <= 100);
//	printf("%10.8d", sum);
//	return 0;
//}
int main()//            ����λ��
{
	int i = 0;
	int a = 0;
	int b = 10;
	int count = 0;
	printf("����������:>");
	scanf_s("%d", &a);
	i = a / 10;
	count++;
	while (i > 0)
	{
		b *= 10;
		i = a / b;

	}
	printf("����λ%dλ��",count);
	return 0;
}


















