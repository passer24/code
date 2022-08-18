#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//int main()
//{
//	//创建一个 数组
//	int arr1[10]={1,2,3};//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5]={'abc'};
//	
//	return 0;
//}
////arr3[][]就不是连续存放分行和列 二维数组也是连续储存的 低地址到高地址


//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}数组名是数组首元素地址 sizeof单独放一个数组名时此时表示整个数组 单位是字节 &arr数组名代表整个数组的地址

//int main()
//{
//	int x = 0;
//	int n = 0;
//	int y = 0;
//	printf("请输入运算数字：>");
//	scanf_s("%d", &x);
//	printf("请输入对数的底数：>");
//	scanf_s("%d", &n);
//	while (x > 1)
//		{
//			x /= n;
//			y++;
//		}
//	printf("结果为：%d", y);
//	
//	return 0;
//}
int main()
{
	int i=0.0f ;
	int sum = 0.0f;
	int count = 0.0f;
	do
	{
		
		if (i != -1)
		{
		printf("请输入计算数字(-1结束)：>");
		scanf_s("$d", &i);
		sum += i;
		count++;
		}
		else
			printf("%f",sum/count);
	} while (i!=-1);
	return 0;
}