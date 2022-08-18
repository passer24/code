#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	char ch[100][100] = { 0 };
//	int n = 0;
//	scanf("%d\n", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j<100; j++)
//		{
//			scanf("%c", &ch[i][j]);	
//			if (ch[i][j] == '\n')
//				break;
//			
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d\n", &n);
//	char a[100][2000];
//	int i, j, k;
//	int limit[100];
//	int start = 0;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < 100; j++) {
//			scanf("%c", &a[i][j]);
//			if (a[i][j] == '\n') {
//				limit[start] = j;
//				start++;
//				break;
//			}
//		}
//	}
//	char temp;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < limit[i]; j++) {
//			for (k = j; k < limit[i]; k++) {
//				if (a[i][j] > a[i][k]) {
//					temp = a[i][j];
//					a[i][j] = a[i][k];
//					a[i][k] = temp;
//				}
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < limit[i]; j++) {
//			printf("%c", a[i][j]);
//		}
//		printf("\n");
//	}
//}

#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);//输入有多少组 
	int i, j, k, l, temp, cnt, x, y, z1, z2, wdf;
	int a[10000];
	long long sum[10000];
	cnt = 0;
	for (l = 0; l < t; l++) {
		scanf("%d", &j);//输入某组中有多少个数字串 
		for (i = 0; i < j; i++) {
			if (i < j - 1) {
				scanf("%d ", &a[i]);
			}
			else if (i == j - 1) {
				scanf("%d", &a[i]);
			}//输入该组的所有数组串 
		}
		//printf("%d %d %d",a[0],a[1],a[2]);
		for (i = 0; i < j; i++) {
			for (k = i; k < j; k++) {
				if (a[i] != a[k])
				{
					x = a[i];
					y = a[k];
					z1 = 1;
					z2 = 1;
					while (x > 0) {
						x /= 10;
						z1 *= 10;
					}
					while (y > 0) {
						y /= 10;
						z2 *= 10;
					}
					if (a[i] * z2 / z1 > a[k]) {
						temp = a[i];
						a[i] = a[k];
						a[k] = temp;
					}
					if (a[i] * z2 / z1 == a[k]) {
						wdf = a[i] % (z1 / z2);
						//printf("%d\n", wdf);
						if (wdf < z2 / 10) {
							if (a[k] / (z2 * z2) * z1 < wdf) {
								temp = a[i];
								a[i] = a[k];
								a[k] = temp;
							}
						}
						else if (wdf >= z2 / 10 && wdf < z2) {
							if (wdf > a[k]) {
								temp = a[i];
								a[i] = a[k];
								a[k] = temp;
							}
						}
						//printf("%d",wdf);
						else if (wdf >= z2) {
							if (wdf / (z1/z2/z2) > a[k]) {
								temp = a[i];
								a[i] = a[k];
								a[k] = temp;
								//printf("%d", wdf);
							}
						}
					}
				}
				
			}
		}
		//排序 
			//printf("%d %d %d\n",a[0],a[1],a[2]);
		sum[cnt] = 0;
		for (i = 0; i < j; i++) {
			x = a[i];
			y = 1;
			while (x > 0) {
				x /= 10;
				y *= 10;
			}
			sum[cnt] = sum[cnt] * y + a[i];//再组合为一个从小数字串排列到大数字串的数字 
		}
		cnt++;
	}
	//printf("%d",sum[cnt-1]);
//printf("%d %d %d\n",a[0],a[1],a[2]);
//printf("%d\n",j);
	for (cnt = 0; cnt < t; cnt++) {
		printf("%d", sum[cnt]);
		if (cnt != t - 1) {
			printf("\n");
		}//输出结果 
	}
}
