#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

//int Add(int x, int y)//�ӷ�ԭ��
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d", sum);
//	return 0;
//}�⺯�����Զ��庯��
//int main()
//{
//	char arr1[] = "bit   ";\0�ַ����Ľ�����־
//	char arr2[] = "######";
//	strcpy_s(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}memset memory�ڴ� set����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*',5);//�����ַ���
//	printf("%s", arr);
//	return 0;
//}�Զ��庯�� ���������������ͣ�����
//�Զ��庯����Ҫ�� 1.�������� 2.������ 3.��������
//void Swap1(int x, int y)//void��ʾ�޷���ֵ
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;//�������������Ϊ�����Ƿֿ��ĺ�����ϵ �޷������ı����ߵ���ֵ
//}
//void Swap2(int* pa,int* pb)//*pa������ȷ��
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()//�������͵Ľ��� Ҫ��ȡ����ֵ�ĵ�ַ�ſ�����ԭ������ֵ�Ľ���
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d", a, b);
//	Swap2(&a, &b);
//	printf("\na=%d b=%d", a, b);
//	return 0;
//}��ֵ�뺯���ڲ�����ֵ�޹� ��ַҪ�ı亯���ⲿ�ı���

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if(n%j == 0)
//		return 0;
//	}
//	return 1;
//}
//	
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200;i++);
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//int is_leaf_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	
//	else
//		return 0;
//
//}
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((is_leaf_year)(year) == 1)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d ", count);
//	return 0;
//}



//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return - 1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	
//	if (ret == -1)
//	{
//		printf("�Ҳ���������\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±��ǣ�%d\n",ret);
//	}
//	return 0;
//}
//void Add(int* p)//�ı��ô���ַ����
//{
//	(* p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);//����ַ
//	printf("%d ", num);
//	return 0;
//}����Ƕ�׵��� ��ʽ���� ����ֵ������ֵ
//int main()
//{
//	int len = 0;
//	/*len = strlen("abc");
//	printf("%d\n", len);*/
//	printf("%d\n", strlen("abc"));//��ʽ����
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf����ֵ���ַ��ĸ���
//	return 0;
//}
//�����Ķ���
//
//int Add(int, int);
//
//int main()//�����Ķ�����һ�� ͷ�ļ������� Դ�ļ��Ŷ���
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
int main()
{
	int a = 0;
	int i = 0;
	int b = 1;
	scanf_s("%d", &i);
	for (a = i; a > 1; a--)
	{
		b = a * 1;
		printf("%d", b);
	}
	printf("%d", b);
	return 0;
}