#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int T = 0;
//	int q = 0;
//	char str[100][100] = { 0 };
//	char str1[1] = { 0 };
//	char ret[100][100] = { 0 };
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		int n = 0;
//		scanf("%d", &n);
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%s", &str[j]);
//		}
//		for (int w = 0; w < j; w++)//�����ǰ�¼��������ַ���ͷ��ʼ�Ƚ� �����ͬ�Ͱ���strcpy��str1
//		{
//			for (int k = w+1; k < j; k++)
//			{
//				if (strcmp(str[w], str[k])==0)
//				{
//					strcpy(str[k], str1);
//					strcpy(str[w], str1);//��Ϊ��Ŀд�������ξ�ֱ��strcpy
//					break;
//				}
//			}
//
//		}
//		for (int w = 0; w < n; w++)
//		{
//			if (strcmp(str[w],str1)!=0)//�Ѳ�����str1�Ĵ���ret�������Ҳ����ֻ����һ�ε�
//			{
//				strcpy(ret[q], str[w]);
//				q++;
//			}
//			
//		}
//	}
//	for (int p = 0; p < q; p++)//���Ĵ�ӡ�𰸹���
//	{
//		for (int a = 0; ret[p][a] != '\0'; a++)
//		{
//			printf("%c", ret[p][a]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <stdio.h>

int T, n, num, sum;

int main()
{
    scanf("%d", &T);
    while (T--)
    {
        sum = 0;
        scanf("%d", &n);
        while (n--)
        {
            scanf("%d", &num);
            sum ^= num;
        }
        printf("%d\n", sum);
    }
    return 0;
}