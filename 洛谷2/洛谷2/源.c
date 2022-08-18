#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>
long long N = 0;
char light[200000] = { 0 };
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