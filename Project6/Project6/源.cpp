#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//int main()
//{
//	//����һ�� ����
//	int arr1[10]={1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5]={'abc'};
//	
//	return 0;
//}
////arr3[][]�Ͳ���������ŷ��к��� ��ά����Ҳ����������� �͵�ַ���ߵ�ַ


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
//}��������������Ԫ�ص�ַ sizeof������һ��������ʱ��ʱ��ʾ�������� ��λ���ֽ� &arr������������������ĵ�ַ

//int main()
//{
//	int x = 0;
//	int n = 0;
//	int y = 0;
//	printf("�������������֣�>");
//	scanf_s("%d", &x);
//	printf("����������ĵ�����>");
//	scanf_s("%d", &n);
//	while (x > 1)
//		{
//			x /= n;
//			y++;
//		}
//	printf("���Ϊ��%d", y);
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
		printf("�������������(-1����)��>");
		scanf_s("$d", &i);
		sum += i;
		count++;
		}
		else
			printf("%f",sum/count);
	} while (i!=-1);
	return 0;
}