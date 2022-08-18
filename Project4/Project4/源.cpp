#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

//int Add(int x, int y)//加法原则
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
//}库函数和自定义函数
//int main()
//{
//	char arr1[] = "bit   ";\0字符串的结束标志
//	char arr2[] = "######";
//	strcpy_s(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}memset memory内存 set设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*',5);//代替字符串
//	printf("%s", arr);
//	return 0;
//}自定义函数 函数名，返回类型，参数
//自定义函数三要数 1.返回类型 2.函数名 3.参数类型
//void Swap1(int x, int y)//void表示无返回值
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;//不可完成任务因为内外是分开的毫无联系 无法做到改变两者的数值
//}
//void Swap2(int* pa,int* pb)//*pa才是正确的
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()//两个整型的交换 要用取用数值的地址才可以做原来的数值的交换
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d", a, b);
//	Swap2(&a, &b);
//	printf("\na=%d b=%d", a, b);
//	return 0;
//}传值与函数内部的数值无关 传址要改变函数外部的变量

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
//		printf("找不到该数字\n");
//	}
//	else
//	{
//		printf("找到了,下标是：%d\n",ret);
//	}
//	return 0;
//}
//void Add(int* p)//改变用传地址方法
//{
//	(* p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);//传地址
//	printf("%d ", num);
//	return 0;
//}函数嵌套调用 链式访问 返回值做函数值
//int main()
//{
//	int len = 0;
//	/*len = strlen("abc");
//	printf("%d\n", len);*/
//	printf("%d\n", strlen("abc"));//链式访问
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf返回值是字符的个数
//	return 0;
//}
//函数的定义
//
//int Add(int, int);
//
//int main()//函数的定义先一点 头文件放声明 源文件放定义
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