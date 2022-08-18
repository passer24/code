#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int n = 0, m = 0, k = 0;
//	int zuobiao[100][100] = { 0 }, zuobiao1[100][100] = { 0 };
//	char ch[1000][1000] = { 0 };
//	scanf("%d %d %d", &n, &m, &k);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d %d", &zuobiao[i][0], &zuobiao[i][1]);
//	}
//	for (int i = m; i < m + k; i++)
//	{
//		scanf("%d %d", &zuobiao1[i][0], &zuobiao1[i][1]);
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num[10] = { 0 };
//	for (int i = 0; i < 9; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0, m = 0, x = 0, y = 0;
//	int zb[100][100] = { 0 }, zb1[100][100] = { 0 };
//	scanf_s("%d %d %d %d", &n, &m, &x, &y);
//	for (int i = 0; i < x; i++)
//	{
//		scanf_s("%d %d %d %d", &zb[i][0], &zb[i][1], &zb[i][2], &zb[i][3]);
//	}
//	for (int i = 0; i < y; i++)
//	{
//		scanf_s("%d %d", &zb1[i][0], &zb1[i][1]);
//	}
//	for (int i = 0; i < y; i++)
//	{
//		int cnt = 0;
//		int tmp = 0;
//		for (int j = 0; j < x; j++)
//		{
//			/*if ((zb1[i][0] >= zb[j][0]) && (zb1[i][0] <= zb[j][2]) && (zb1[i][1] <= zb[j][3]) && (zb1[i][1] >= zb[j][1]));
//			{
//				cnt++;
//				if (j+1 > tmp)
//					tmp = j+1;
//			}*/
//			if(zb1[i][0]>=zb[j][0])
//				if (zb1[i][0] <= zb[j][2])
//					if(zb1[i][1]>=zb[j][1])
//						if (zb1[i][1] <= zb[j][3])
//						{
//							cnt++;
//							if (j + 1 > tmp)
//								tmp = j + 1;
//						}
//
//		}
//		if (cnt > 0)
//		{
//			printf("Y %d %d\n", cnt, tmp);
//		}
//		else if (cnt == 0)
//		{
//			printf("N\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>                    三子棋
//int main()
//{
//	char ch[9] = { 0 };
//	scanf("%s", &ch);
//	for (int i = 0; i < 3; i++)
//	{
//		
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int s = 0, sum = 0, sum1 = 0, i = 0;
//	int judge = 0;
//	scanf("%d", &s);
//	for (i = s; judge == 0; i++)
//	{
//		sum = 1, sum1 = 1;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0&&j!=sqrt(i))
//			{
//				sum = sum + j + i / j;
//			}
//			else if (i % j == 0)
//			{
//				sum += j;
//			}
//		}
//		//sum -= i;
//		for (int k =2; k <= sqrt(sum); k++)
//		{
//			if (sum % k == 0 && k != sqrt(sum))
//			{
//				sum1 = sum1 + k + sum / k;
//			}
//			else if (sum % k == 0)
//			{
//				sum1 += k;
//			}
//		}
//		//sum1 -= sum;
//		if (sum1 == i && sum != i)
//		{
//			judge = 1;
//			printf("%d %d", i, sum);
//		}
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0, num[10] = { 0 }, a = 0;
//	
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int i, s, suma, sumb;
//
//	scanf("%d", &s);
//	while (s)
//	{
//		for (i = 1, suma = 0; i <= s / 2; i++)
//		{
//			if (s % i == 0)
//			{
//				suma += i;
//			}
//		}
//		for (i = 1, sumb = 0; i <= suma / 2; i++)
//		{
//			if (suma % i == 0)
//			{
//				sumb += i;
//			}
//		}
//		if (sumb == s && suma != s)
//		{
//			printf("%d %d\n", s, suma);
//			break;
//		}
//		s++;
//	}
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char num[15] = { 0 };
//	int board[15] = { 0 };
//	scanf("%s", &num);
//	double x = strlen(num);
//	for (int i = 0; i < x; i += 2)
//	{
//		board[num[i] - 49] = 1;
//	}
//	if ((board[0] == board[1] && board[1] == board[2] && board[1] == 1) || (board[3] == board[4] && board[4] == board[5] && board[5] == 1) || (board[6] == board[7] && board[7] == board[8] && board[8] == 1) || (board[0] == board[3] && board[3] == board[6] && board[6] == 1) || (board[1] == board[4] && board[4] == board[7] && board[7] == 1) || (board[2] == board[5] && board[5] == board[8] && board[8] == 1 )|| (board[0] == board[4] && board[4] == board[8] && board[8] == 1) || (board[2] == board[4] && board[4] == board[6] && board[6] == 1))
//	{
//		printf("xiaoa wins.");
//	}
//	else if ((board[0] == board[1] && board[1] == board[2] && board[1] == 0) || (board[3] == board[4] && board[4] == board[5] && board[5] == 0 )|| (board[6] == board[7] && board[7] == board[8] && board[8] == 0) || (board[0] == board[3] && board[3] == board[6] && board[6] == 0) ||( board[1] == board[4] && board[4] == board[7] && board[7] == 0 )||( board[2] == board[5] && board[5] == board[8] && board[8] == 0 )|| (board[0] == board[4] && board[4] == board[8] && board[8] == 0) || (board[2] == board[4] && board[4] == board[6] && board[6] == 0))
//	{
//		printf("uim win.");
//	}
//	else
//	{
//		printf("drew.");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0, ret = 0;
//	double a = 0.0, b = 10.0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int tmp = 0;
//		scanf("%lf %d", &a, &tmp);
//		b -= a;
//		if (b > 10)
//		{
//			b = 10.0;
//			ret += tmp;
//		}
//		else if ( b > 0.0)
//		{
//			ret += tmp;
//		}
//		else if (b <= 0.0)
//		{
//			break;
//		}
//	}
//	int x = 0;
//	while (ret >= pow(2,x))
//	{
//		ret -= pow(2, x);
//		x++;
//	}
//	printf("%d %d", x , ret);
//	return 0;
//}
//#include<stdio.h>                            开灯问题
//long long n = 0, num[2000000] = { 0 };
//char light[2000000] = { 0 };
//double date[5000] = { 0.0 };
//int max = 0;
//int main()
//{
//	scanf("%lld", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lf %lld", &date[i], &num[i]);
//		int tmp = date[i] * num[i];
//		for (int j = 1; j <= num[i]; j++)
//		{
//			if (light[(int)(date[i]*j)] == 0)
//				light[(int)(date[i] * j)] = '1';
//			else if (light[(int)(date[i] * j)] == '1')
//				light[(int)(date[i] * j)] = 0;
//		}
//		if (tmp > max)
//		{
//			max = tmp;
//		}
//	}
//	for (int k = 0; k <= max; k++)
//	{
//		if (light[k] == '1')
//		{
//			printf("%d", k);
//			break;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>                  MC插火柴
//int main()
//{
//	int n = 0, m = 0,k = 0;
//	scanf("%d %d %d", &n, &m, &k);
//	int num[25][2] = {0}, num1[5][2] = {0};
//	char earth[100][100] = {0};
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d %d", &num[i][0], &num[i][1]);
//		for (int j = -2; j <= 2; j++)
//		{
//			if (num[i][0] - 1 + j < 0 || num[i][0] + j>n)
//				continue;
//			earth[num[i][0] - 1 + j][num[i][1]-1] = '1';
//		}
//		for (int w = -2; w <= 2; w++)
//		{
//			if (num[i][1] + w < 1 || num[i][1] + w>n)
//				continue;
//			earth[num[i][0]-1][num[i][1] - 1 + w] = '1';
//		}
//		if (num[i][0] - 2 >= 0 && num[i][1] - 2 >= 0)
//		{
//			earth[num[i][0] - 2][num[i][1] - 2] = '1';
//		}
//		if (num[i][0] <= n-1 && num[i][1]-2 >=0)
//		{
//			earth[num[i][0]][num[i][1] - 2] = '1';
//		}
//		if (num[i][0] - 2 >= 0 && num[i][1] <=n-1)
//		{
//			earth[num[i][0] - 2][num[i][1]] = '1';
//		}
//		if (num[i][0] <= n-1 && num[i][1] <= n)
//		{
//			earth[num[i][0]][num[i][1]] = '1';
//		}
//	}
//	for (int i = 0; i < k; i++)
//	{
//		scanf("%d %d", &num1[i][0], &num1[i][1]);
//		for (int j = -2; j <= 2; j++)
//		{
//			if (num1[i][0] - 1 + j < 0 || num1[i][1] + j>n)
//				continue;
//			for (int w = -2; w <= 2; w++)
//			{
//				if (num1[i][1] + w < 1 || num1[i][1] + w>n)
//					continue;
//				earth[num1[i][0] - 1 + j][num1[i][1] + w - 1] = '1';
//			}
//		}
//	}
//	int cnt = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (earth[i][j] != '1')
//				cnt++;
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}
//#include<stdio.h>                             算 正方形 长方形的数量
//int main()
//{
//	int N = 0, M = 0, cnt = 0, cnt1 = 0;
//	char board[100][100] = { 0 };
//	scanf("%d %d", &N, &M);
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			for(int l1=i+1;l1<=N;l1++)
//				for (int l2 = j + 1; l2 <= M; l2++)
//				{
//					int e1 = l1 - i, e2 = l2 - j;
//					if (e1 > 0 && e2 > 0)
//					{
//						if (e1 == e2)
//							cnt++;
//						else
//							cnt1++;
//					}
//				}
//			
//		}
//	}
//	printf("%d %d", cnt, cnt1);
//	return 0;
//}
#include<stdio.h>
long long N = 0;
char light[2000000000] = { 0 };
int main()
{
	scanf("%lld", &N);
	for (int i = 1; i <= N; i++)
	{
		for (int j = i; j <= N; j += i)
		{
			light[j] = '1';
		}
	}
	for (int k = 1; k <= N; k++)
	{
		if (light[k] == '1')
		{
			printf("%d ", k);
		}
	}
	return 0;
}