#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"//�Լ���Ƶĺ����á��� �⺯����<> ��ģ��д���� ��������add���ȫ����������
#include<string.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}
//�����ݹ� �����Լ������Լ�
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//

//void print(int n)
//{
//	if (n > 9)//�ҵ��������Ƶݹ鲻Ȼ��ջ���
//	{
//		print(n/ 10);//�������� ֱ�ӵ��ã��ؼ�������������Ҫ���� ҪԽ��Խ�ӽ����������
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

//int my_strlen(char* str)//�����ַ�������
//{
//	int count = 0;
//	while (*str!='\0')//while��if���治�ӷֺ�
//	{
//		
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)//������ʱ�������ַ�������
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//	
//}
////���»�С my_strlen
//
//
//int main()
//{
//	char arr[] = "bit";//bit\0�ַ�����������ʽ
//	//int len = strlen(arr);
//	//printf("len=%d", len);
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//int Facl(int n) n�Ľ׳�
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

//int feibo(int n) �������̫����
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
//��ŵ������ ������̨������
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
//               //��ʼ    ����    Ŀ��
//void move(int n, char a, char b, char c)
//{
//    if (n == 1)
//        printf("\t%c->%c\n", a, c);    //��nֻ��1����ʱ��ֱ�Ӵ�a�ƶ���c 
//    else
//    {             //a��ʼ c���� bĿ�� �͵��ڵ������Լ�һ��
//        move(n - 1, a, c, b);            //��a��n-1������ͨ��c�ƶ���b 
//        printf("\t%c->%c\n", a, c);   //��a�����1����(������)�ƶ���c 
//        move(n - 1, b, a, c);            //��b�����n-1����ͨ��a�ƶ���c 
//    }
//}
//
//int main()
//{
//    int n;
//    printf("������Ҫ�ƶ��Ŀ�����");
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
int tiao(int n)//���ǵݹ��д��
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
	printf("��������̨�ף�");
	scanf_s("%d", &n);
	ret=tiao(n);
	printf("һ����%d����", ret);
	return 0;
}