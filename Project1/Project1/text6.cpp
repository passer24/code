#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>;
//int main()
//{
//	int a = 1;
//	for (a = 1; a < 11; a++)
//	{
//		if (a == 5)
//			break;
//		printf("%d",a);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//10��ѭ��
//	//10������
//	for (i = 0; i < 10; i++)//�������ұ�
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)//for�ĳ�ʼ�����жϡ�����������ʡ�� �����жϱ�ʡ�����жϽ���ͺ�Ϊ��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i=0; i < 10; i++)
//	{
//		for (j=0; j < 10; j++)//j�Ѿ����10һ��ʼ����10�˽�����
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//
////}
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//			printf("%d\n", i);
//			i++;
//		}
//		
//	} 
//	while (i < 10);
//	return 0;
//}
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d",&n);
	for (n = 1; n < i+1; n++)
	{
		ret = ret * n;
	}
	printf("ret=%d\n", ret);

	return 0;
}