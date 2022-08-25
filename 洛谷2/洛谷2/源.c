#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//long long N = 0;                    开灯2.0 但是大数据通过不了
//char light[2000000] = { 0 }; 
//int main()
//{
//	scanf("%lld", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = i; j <= N; j += i)
//		{
//			if (light[j] == 0)
//				light[j] = '1';
//			else if (light[j] == '1')
//				light[j] = 0;
//		}
//	}
//	for (int k = 1; k <= N; k++)
//	{
//		if (light[k] == '1')
//		{
//			printf("%d ", k);
//		}
//	}
//	return 0;
//}
//#include<math.h>               开灯2.0
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	for (int i = 1; i < sqrt(N); i++)
//	{
//		printf("%d ", i * i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int M = 0, N = 0;
//	scanf("%d %d", &N, &M);
//	if (N % M == 0)
//	{
//		for (int i = 0; i < M; i++)
//		{
//			printf("%d ", N / M);
//		}
//	}
//	else
//	{
//		int tmp = M;
//		for (int i = 0; i < M; i++)
//		{
//			printf("%d ", N / tmp);
//			N -= (N / tmp);
//			tmp--;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num[3];
//	scanf("%d %d %d", &num[0], &num[1], &num[2]);
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			if (num[j] < num[j + 1])
//			{
//				int tmp = num[j+1];
//				num[j + 1] = num[j];
//				num[j] = tmp;
//			}
//		}
//	}
//	int i = 0;
//	int x = num[0], y = num[2];
//	while (num[2] != 0)
//	{
//		i = num[0] % num[2];
//		num[0] = num[2];
//		num[2] = i;
//	}
//	printf("%d/%d", y / num[0], x / num[0]);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int n = 0;
//long long num[20000000] = { 0 };
//int compare(const void* a, const void* b)
//{
//	return (*(int*)a - *(int*)b);
//}
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lld", &num[i]);
//	}
//	qsort(num, n, sizeof(long long),compare);
//	int time = 0;
//	time = num[n - 1] * 10 + n;
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i - 1] != num[i])
//			time += 5;
//	}
//	printf("%d", time);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int compare(const void* a, const void* b)
//{
//	return (*(int*)a - *(int*)b);
//}
//int main()
//{
//	int num[3] = { 0 }, num1[3] = { 0 }, n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d %d", &num[i], &num1[i]);
//	}
//	int ret[3] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		int tmp = 0, j = 1;
//		do {
//			tmp = num[i] * j;
//			j++;
//		} while (tmp < n);
//		ret[i] = num1[i] * (j - 1);
//	}
//	qsort(ret, 3, sizeof(int), compare);
//	printf("%d", ret[0]);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n = 0;
//	char ch[51] = { 0 };
//	scanf("%d", &n);
//	scanf("%s", &ch);
//	for (int i = 0; i < strlen(ch); i++)
//	{
//		char tmp = ch[i] + n;
//		if (tmp <= 122)
//			ch[i] += n;
//		else if (tmp > 122)
//		{
//			ch[i] = 96 + (ch[i] - 122);
//		}
//	}
//	printf("%s", ch);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0, x = 0, cnt = 0;
//	scanf("%d %d", &n, &x);
//	for (int i = 1; i <= n; i++)
//	{
//		int tmp = i;
//		while (tmp > 0)
//		{
//			int y = tmp % 10;
//			if (y == x)
//				cnt++;
//			tmp /= 10;
//			
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}
//#include<stdio.h>
//long long k = 0, m = 0, n = 0;
//long long num[30000][2] = { 0 };
//long long ret[300000] = { 0 };
//int main()
//{
//	int w = 0;
//	scanf("%lld %lld %lld", &k, &m, &n);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%lld %lld", &num[i][0], &num[i][1]);
//		if (num[i][0] != 0)
//		{
//			int j = k / num[i][0];
//			if ((j * num[i][1]) >= n)
//			{
//				ret[w] = i + 1;
//				w++;
//			}
//		}
//	}
//	if (ret[0] == 0)
//	{
//		printf("-1");
//	}
//	else 
//	for (int i = 0; i < w; i++)
//	{
//		printf("%lld ", ret[i]);
//	}
//	return 0;
//}
//#include<stdio.h>                     质因子分解
//int N = 0;
//int ret[10000] = { 0 };
//int main()
//{
//	scanf("%d", &N);
//	for (int i = 2; i <= N; i++)
//	{
//		int i1 = i;
//		for (int j = 2; i1 != 1; j++)
//		{
//			while (i1 % j == 0)
//			{
//				ret[j]++;
//				i1 /= j;
//			}
//		}
//	}
//	for (int i = 2; i <= 10000 ; i++)
//	{
//		if (ret[i] != 0)
//			printf("%d %d\n", i, ret[i]);
//	}
//	return 0;
//}
//#include<stdio.h>                   红绿灯
//int N = 0 ; 
//int far[100000] = { 0 };
//int red[100000] = { 0 }, greed[100000] = { 0 };
//int main()
//{
//	scanf("%d", &N);
//	for (int i = 0; i < N ; i++)
//	{
//		scanf("%d", &far[i]);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &red[i]);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &greed[i]);
//	}
//	int tmp = 0, tmp1 = 0;
//	for (int i = 0; i < N; i++)
//	{
//		tmp1 += far[i];
//		tmp = greed[i] + red[i];
//		if (tmp1 >= tmp && (tmp1%tmp) <= greed[i])
//		{
//			printf("%d\n", tmp1);
//		}
//		else if (tmp1 >= tmp && (tmp1 % tmp) > greed[i])
//		{
//			tmp1 += tmp - (tmp1 % tmp);
//			printf("%d\n", tmp1);
//		}
//		else if (tmp1 < tmp && (tmp & tmp1) > greed[i])
//		{
//			tmp1 += tmp % tmp1;
//			printf("%d\n", tmp1);
//		}
//		else if (tmp1 < tmp && (tmp & tmp1) <= greed[i])
//		{
//			printf("%d\n", tmp1);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int M = 0; 
//char num[1000] = { 0 };
//int main()
//{
//	scanf("%d", &M);
//	scanf("%s", &num);
//	for (int i = 1; i < strlen(num); i++)
//	{
//		for (int j = 1; j <= strlen(num) - i; j++)
//		{
//			char tmp = num[j - 1];
//			num[j - 1] = num[j];
//			num[j] = tmp;
//		}
//	}
//	for (int i = strlen(num)-1; i >= 0; i--)
//	{
//		if (num[i] != '0')
//		{
//			printf("%c*%d^%d", num[i], M, i);
//		}
//		for (int j = i-1; j >= 0; j--)
//		{
//			if (num[j] != '0')
//			{
//				printf("+");
//				i = j + 1;
//				break;
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>                   玩卡牌
//#include<stdlib.h>
//#include<math.h>
//int n = 0;
//long long num = 0;
//int ch[1000] = { 0 };
//int compare(const void* a, const void* b)
//{
//	return(*(int*)b - *(int*)a);
//}
//int main()
//{
//	int tmp = 0, judge = 0, judge1 = 0;
//	scanf("%d", &n);
//	int j = 0 ;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &ch[i]);
//		if (ch[i] == 0)
//			judge = 1;
//	}
//	qsort(ch, n, sizeof(int), compare);
//	for (int w=0;w<n;w++)
//	{
//		num = 0;
//		for (int i = w,j=n-1-w; i < n; i++,j--)
//		{
//			num += ch[i] * pow(10, j);
//		}
//		if (num % 90 == 0)
//		{
//			printf("%lld", num);
//			judge1 = 1;
//			break;
//		}
//	}
//	if (judge == 1 && judge1 == 0)
//	{
//		printf("0");
//	}
//	else if(judge == 0 && judge1 == 0)
//	{
//		printf("-1");
//	}
//	return 0;
//}
//#include<stdio.h>                         玩卡牌 遇到大数据时尽量拆开来计算
//int n = 0, cnt = 0,cnt1 = 0;
//int num[1000] = { 0 };
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//		if (num[i] == 5)
//			cnt++;
//		else
//			cnt1++;
//	}
//	if (cnt >= 9)
//	{
//		if (cnt % 9 == 0)
//		{
//			for (int i = 0; i < cnt; i++)
//				printf("5");
//			for (int i = 0; i < cnt1; i++)
//				printf("0");
//		}
//		else
//		{
//			cnt -= cnt % 9;
//			for (int i = 0; i < cnt; i++)
//				printf("5");
//			for (int i = 0; i < cnt1; i++)
//				printf("0");
//		}
//	}
//	else if (cnt % 9 != 0 && cnt < 9 && cnt1 > 0)
//	{
//		printf("0");
//	}
//	else if (cnt < 9 && cnt1 == 0)
//	{
//		printf("-1");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int compare(const void* a, const void* b)
//{
//	return(*(int*)b - *(int*)a);
//}
//int n = 0;
//int num[10000][10000] = { 0 }, ret[10000][2] = { 0 };
//long long sum = 0, cnt = 0;
//long long ret1[10000] = { 0 }, q = 0, zui = 0;
//int main()
//{
//	int judge = 0, w = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &num[i][j]);
//			if (num[i][j] == 0)
//			{
//				judge = 1;
//				ret[w][0] = i;
//				ret[w][1] = j;
//				w++;
//			}
//		}
//	}
//	if (judge == 0)
//	{
//		printf("Bad Game!");
//	}
//	else
//	{
//		for (int i = 0; i < w; i++)
//		{
//			cnt = 0;
//			for (int k = 0; k < n; k++)
//			{
//				cnt += num[ret[i][0]][k];
//				cnt += num[k][ret[i][1]];
//			}
//			ret1[q] = cnt;
//			q++;
//		}
//		qsort(ret1, q, sizeof(long long), compare);
//	}
//	printf("%lld", ret1[0]);
//	return 0;
//}
//#include<stdio.h>
//long double sum = 0;
//int main()
//{
//	long double tmp = 0;
//	while (scanf("%lf", &tmp) != EOF)
//	{
//		sum += tmp;
//	}
//	printf("%.5lf", sum);
//	return 0;
//}
//#include<stdio.h>
//double n = 0;
//long double num = 0;
//int main()
//{
//	scanf("%lf", &n);
//	num = n * 100000000 / 23;
//	printf("%.8Lf", num / 100000000);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int N = 0;
//	int num[9] = { 0 };
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		if()
//	}
//	return 0;
////}
//#include<stdio.h>
//int jiang[7] = { 0 };
//int num[1000][7] = {0};
//int ret[7] = { 0 };
//int main()
//{
//	int n = 0;
//	int cnt = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &jiang[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cnt = 0;
//		for (int j = 0; j < 7; j++)
//		{
//			scanf("%d", &num[i][j]);
//			for (int k = 0; k < 7; k++)
//			{
//				if (num[i][j] == jiang[k])
//				{
//					cnt++;
//					break;
//				}
//			}
//		}
//		ret[7 - cnt]++;
//	}
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int n = 0, m = 0, num[1000] = { 0 }, ret[1000] = { 0 };
//int compare(const void* a, const void* b)
//{
//	return(*(int*)b - *(int*)a);
//}
//int main()
//{
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	qsort(num, m, sizeof(int), compare);
//	if (n >= m)
//	{
//		int tmp = 1, i = 0, zui = 0, hou = 0;
//		for (int i = 0; i < m; i++,tmp++)
//		{
//			ret[i] = num[i] * tmp;
//		}
//		for (int i = 0; i < m; i++)
//		{
//			if (ret[i] >= zui)
//			{
//				zui = ret[i];
//				hou = num[i];
//			}
//		}
//		printf("%d %d",hou,zui);
//	}
//	else if(m > n)
//	{
//		int tmp = 1, j = 0,zui = 0, hou = 0;
//		for (int i = 0,j = 0; i < n; i++,tmp++,j++)
//		{
//			ret[j] = num[i] * tmp;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (ret[i] >= zui)
//			{
//				zui = ret[i];
//				hou = num[i];
//			}
//		}
//		printf("%d %d", hou, zui);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//char ch[10000] = { 0 };
//char ret[1000] = { 0 };
//int sum = 0;
//int main()
//{
//	int judge = 0, j = 0, a = 0, b = 0;
//	gets(ch);
//	for (int i = 0; ch[i] != '#'; i++)
//	{
//		if (ch[i] == '-')
//		{
//			judge = 1;
//			a = i;
//			break;
//		}
//	}
//	for (int i = 0; ch[i] != '#'; i++)
//	{
//		if ((ch[i] >= '0' && ch[i] <= '9') || (ch[i] >= 'a' && ch[i] <= 'f') || (ch[i] >= 'A' && ch[i] <= 'F'))
//		{
//			b = i;
//			break;
//		}
//	}
//	for (int i = 0; ch[i] != '#'; i++)
//	{
//		if ((ch[i] >= '0' && ch[i] <= '9') || (ch[i] >= 'a' && ch[i] <= 'f') || (ch[i] >= 'A' && ch[i] <= 'F'))
//		{
//			ret[j] = ch[i];
//			j++;
//		}
//	}
//	if (ret[0] == 0)
//	{
//		printf("0");
//	}
//	else if (judge == 0)
//	{
//		int tmp = j-1;
//		for (int i = 0; i < j; i++)
//		{
//			if (ret[i] >= 'a' && ret[i] <= 'f')
//				sum += (ret[i] - 'a' + 10)* pow(16,tmp-i);
//			else if (ret[i] >= 'A' && ret[i] <= 'F')
//			{
//				sum += (ret[i] - 'A' + 10) * pow(16, tmp - i);
//			}
//			else if (ret[i] >= '0' && ret[i] <= '9')
//			{
//				sum += (ret[i] - '0') * pow(16, tmp - i);
//			}
//		}
//		printf("%d", sum);
//	}
//	else if(judge==1&&a<b)
//	{
//		int tmp = j - 1;
//		for (int i = 0; i < j; i++)
//		{
//			if (ret[i] >= 'a' && ret[i] <= 'f')
//				sum += (ret[i] - 'a' + 10) * pow(16, tmp - i);
//			else if (ret[i] >= 'A' && ret[i] <= 'F')
//			{
//				sum += (ret[i] - 'A' + 10) * pow(16, tmp - i);
//			}
//			else if (ret[i] >= '0' && ret[i] <= '9')
//			{
//				sum += (ret[i] - '0') * pow(16, tmp - i);
//			}
//		}
//		printf("-%d", sum);
//	}
//	else if (judge == 1 && a > b)
//	{
//		int tmp = j - 1;
//		for (int i = 0; i < j; i++)
//		{
//			if (ret[i] >= 'a' && ret[i] <= 'f')
//				sum += (ret[i] - 'a' + 10) * pow(16, tmp - i);
//			else if (ret[i] >= 'A' && ret[i] <= 'F')
//			{
//				sum += (ret[i] - 'A' + 10) * pow(16, tmp - i);
//			}
//			else if (ret[i] >= '0' && ret[i] <= '9')
//			{
//				sum += (ret[i] - '0') * pow(16, tmp - i);
//			}
//		}
//		printf("%d", sum);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int N, sum = 0;
//	scanf("%d", &N);
//	for (int i = 0; i * i <= N; i++)
//	{
//		for (int j = 0; j * j <= N; j++)
//		{
//			for (int k = 0; k * k <= N; k++)
//			{
//				for (int l = 0; l * l <= N; l++)
//				{
//					if (pow(i, 2) + pow(j, 2) + pow(k, 2) + pow(l, 2) == N)
//						sum++;
//				}
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//long long n = 0;
//long long sum = 0;
//int main()
//{
//	scanf("%lld", &n);
//	for (int i = 1, cnt = 0; cnt < n; i++)
//	{
//		for (int j = 0; j < i && cnt < n; j++)
//		{
//			sum += i;
//			cnt++;
//		}
//	}
//	printf("%lld", sum);
//	return 0;
//}
//#include<stdio.h>
//int a = 0, b = 0;
//char qizi[101][101] = {0};
//int main()
//{
//	scanf("%d %d\n", &a, &b);
//	for (int i = 0; i < a; i++)
//	{
//		gets(qizi[i]);
//	}
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			if (qizi[i][j] == '?')
//			{
//				int cnt = 0;
//				for (int k = i - 1; k <= i+1; k++)
//				{
//					if (k < 0)
//						continue;
//					for (int w = j - 1; w <= j+1; w++)
//					{
//						if (w < 0)
//							continue;
//						else if (qizi[k][w] == '*')
//						{
//							cnt++;
//						}
//					}
//				}
//				qizi[i][j] = cnt + 48;
//			}
//		}
//	}
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			printf("%c", qizi[i][j]);
//			if (j == b - 1)
//				printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int num[1000000] = { 0 };
//int compare(const void* a, const void* b)
//{
//	return(*(int*)b - *(int*)a);
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	int sum = 0, cnt = 0;
//	qsort(num, a, sizeof(int), compare);
//	for (int i=0;sum < b;i++)
//	{
//		sum += num[i];
//		cnt++;
//	}
//	printf("%d", cnt);
//	return 0;
//}
//














