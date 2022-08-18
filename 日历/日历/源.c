#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int isleap(int n)
{
	if (n % 400 == 0 || n % 4 == 0 && n % 100 != 0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int lim1[] = { 1,17,2,20 };
	int lim2[] = { 7,11,8,28 };
	int n = 0;
	scanf("%d", &n);
	int date[1000] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &date[i]);
	}
	int j = 0;
	for (j = 0; j < n; j+=6)
	{
		if (date[j] == date[j + 3] )
		{
			
		}
		else if (date[j] > date[j + 3])
		{
			
		}
	}


	return 0;
}