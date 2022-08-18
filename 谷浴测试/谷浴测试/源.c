#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf_s("%d %d", &a, &b);
//	c = a + b;
//	printf("%d", c);
//
//	return 0;
//}
#include<stdio.h>
#include<stdio.h>
//int main()
//{
//    int N = 0;
//    scanf_s("%d", &N);
//    int num[101] = { 0 };
//    for (int i = 0; i < N; i++)
//    {
//        scanf_s("%d", &num[i]);
//    }
//    for (int j = 1; j < N; j++)
//    {
//        for (int i = 0; i < N-1; i++)
//        {
//            if (num[i] > num[i+1])
//            {
//                int tmp = num[i];
//                num[i] = num[i+1];
//                num[i+1] = tmp;
//            }
//        }
//    }
    //for (int i = 0; i < N; i++)
    //{
    //    printf("%d ", num[i]);
    //}
//    int cnt = 0;
//    for (int i = 0; i < N + 1; i++)
//    {
//        if (num[i] != num[i + 1])
//        {
//            cnt++;
//        }
//    }
//    printf("%d\n", cnt);
//    for (int i = 0; i < N + 1; i++)
//    {
//        if (num[i] != num[i + 1])
//        {
//            printf("%d ", num[i]);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int isprime(int n)
//{
//    for (int i = 2; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    int n = 0, p = 0;
//    scanf("%d", &n);
//    int j = 0;
//    for (int i = 2; isprime(i) != 1 && isprime(n/i) != 1; i++)
//    {
//        printf("%d", n / i);
//        break;
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int sum[8] = { 0 };
//    for (int i = 0; i < 7; i++)
//    {
//        int a = 0, b = 0;
//        scanf("%d%d", &a, &b);
//        sum[i] = a + b;
//    }
//    int tmp = 0;
//    for (int i = 0; i < 7; i++)
//    {
//        if (sum[i - 1] > 8 && sum[i] > 8 && sum[i - 1] > sum[i])
//        {
//            tmp = i;
//        }
//        else if (sum[i - 1] > 8 && sum[i] > 8 && sum[i - 1] < sum[i])
//        {
//            tmp = i + 1;
//        }
//        else if (sum[i - 1] > 8 && sum[i] > 8 && sum[i - 1] == sum[i])
//        {
//            tmp = i;
//        }
//    }
//    printf("%d", tmp);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int num[12] = { 0 };
//    int rem = 0;
//    int dep = 0;
//    for (int i = 0; i < 12; i++)
//    {
//        scanf("%d", &num[i]);
//    }
//    for (int i = 0; i < 12; i++)
//    {
//        if ((rem + 300) < num[i])
//        {
//            printf("-%d", i + 1);
//            goto END;
//        }
//        int tmp = 0;
//        tmp = 300 - num[i] + rem;
//        int j = tmp / 100;
//        if (j > 0)
//        {
//            dep += j * 100;
//            rem = tmp - j * 100;
//        }
//        else
//        {
//            rem = tmp;
//        }
//    }
//    int c = dep * 1.2;
//    printf("%d", c);
//END:
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int N = 0, num[10001] = { 0 };
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%d", &num[i]);
//    }
//    int cnt = 0;
//    for(int i=0;i<N-1;i++)
//    {
//        for (int j = 0; j < N; j++)
//        {
//            int tmp = 0;
//            if (num[j - 1] > num[j])
//            {
//                tmp = num[j - 1];
//                num[j - 1] = num[j];
//                num[j] = tmp;
//                cnt++;
//            }
//        }
//    }
//    printf("%d", cnt);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    printf("%d\n", N);
//    int yb[100] = { 0 };
//    for (int i = 0; i < N; i++)
//    {
//            for (int j = 0; j < N; j++)
//            {
//                if (yb[j] == 0)
//                    yb[j] = 1;
//                else
//                    yb[j] = 0;
//            }
//            if (yb[i] == 0)
//                yb[i] = 1;
//            else
//                yb[i] = 0;
//            for (int w = 0; w < N; w++)
//            {
//                printf("%d ", yb[w]);
//                if (w == N - 1)
//                {
//                    printf("\n");
//                }
//            }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0, k = 0,cnt=0;
//    scanf("%d%d", &n, &k);
//    int ret = n, tmp = n/k;
//    while (tmp > 0)
//    {
//        ret = ret + tmp;
//        cnt = cnt + tmp;
//        tmp = (ret - cnt * k) / k;
//        
//    }
//    printf("%d", ret);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int K = 0;
//    scanf("%d", &K);
//    int judge = 0;
//    for (int i = 10000; i <= 30000; i++)
//    {
//        int a = 0, b = 0, c = 0;
//        a = i % 1000;
//        b = i / 10 & 1000;
//        c = i / 100 % 1000;
//        if ((a % K == 0) && (b % K == 0) && (c % K == 0))
//        {
//            printf("%d\n", i);
//            judge = 1;
//        }
//    }
//    if (judge == 0)
//    {
//        printf("NO");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char ch1[7] = { 0 }, ch2[7] = { 0 };
//    scanf("%s", &ch1);
//    scanf("%s", &ch2);
//    int a = 1, b = 1;
//    for (int i = 0; ch1[i] != '\0'; i++)
//    {
//        a = a * (ch1[i] - 64);
//    }
//    for (int i = 0; ch2[i] != '\0'; i++)
//    {
//        b = b * (ch2[i] - 64);
//    }
//    if ((a % 47) == (b % 47))
//    {
//        printf("GO");
//    }
//    else
//    {
//        printf("STAY");
//    }
//    return 0;
//}
//#include<stdio.h>
//void fenli(int n)
//{
//    if (n % 10 != 0)
//    {
//        while (n > 0)
//        {
//            printf("%d", n % 10);
//            n /= 10;
//        }
//    }
//    else
//    {
//        while (n % 10 == 0)
//        {
//            n /= 10;
//        }
//        while (n > 0)
//        {
//            printf("%d", n % 10);
//            n /= 10;
//        }
//    }
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a > 0)
//    {
//        fenli(a);
//    }
//    else
//    {
//        printf("-");
//        fenli(-a);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    for (int i = 4; i <= N; i += 2)
//    {
//        if (i == 4)
//        {
//            printf("4=2+2\n");
//        }
//        else
//        {
//            for (int j = 3; j <= (i / 2); j++)
//            {
//                int a = 1;
//                for (int x = 2; x < j; x++)
//                {
//                    if (j % x == 0)
//                    {
//                        a = 0;
//                        break;
//                    }
//                }
//                int b = 1;
//                for (int w = 2; w < i - j; w++)
//                {
//
//                    if ((i - j) % w == 0)
//                    {
//                        b = 0;
//                        break;
//                    }
//                }
//                if (a == 1 && b == 1)
//                {
//                    printf("%d=%d+%d\n", i, j, i - j);
//                    break;
//                }
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int hight[10001] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &hight[i]);
//    }
//    int cnt = 0;
//    for (int i = 1; i < n; i++)
//    {
//        if (hight[i] == hight[i + 1])
//        {
//            for (int j = i; j < n; j++)
//            {
//                hight[j] = hight[j + 1];
//                hight[j + 1] = hight[j+2];
//            }
//            n--;
//        }
//    }
//    for (int i = 0; i<n; i++)
//    {
//        if (i == 0 && hight[0] > hight[1])
//        {
//            int j = 0;
//            for (j = 2; j < n; j++)
//            {
//                if (hight[j] >= hight[0])
//                {
//                    cnt++;
//                    i = j;
//                }
//            }
//        }
//        else if (hight[i] < hight[i - 1] && hight[i] < hight[i + 1])
//        {
//            cnt++;
//        }
//    }
//    printf("%d", cnt);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int q = 0;
//    int p = 0;
//    int a = 0;
//    int b = 0;
//    for(int b = 0;b<n*n;)
//    {
//        scanf("%d", &a);
//        b += a;
//        p++;
//        if (p % 2 == 0)
//        {
//            for (int w = 0; w < a; w++)
//            {
//                printf("1");
//                q++;
//                if (q == n&&b<n*n)
//                {
//                    printf("\n");
//                    q = 0;
//                }
//            }
//        }
//        else
//        {
//            for (int w = 0; w < a; w++)
//            {
//                printf("0");
//                q++;
//                if (q == n&&b<n*n)
//                {
//                    printf("\n");
//                    q = 0;
//                }
//            }
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	char a[100][100]={0};
//	int i, j, k;
//	//	int limit[100];
//	//	int start=0;
//	for (i = 0; i < n; i++) 
//	{
//		j = 0;
//		while (1)
//		{
//			char ch[2] = { 0 };
//			scanf("%c", &ch[0]);
//			if (getchar() == '\n')
//					break;
//			a[i][j] = ch[0];
//		}
//	}
//	//	char temp;
//	//	for(i=0;i<n;i++){
//	//		for(j=0;j<limit[i];j++){
//	//			for(k=j;k<limit[k];k++){
//	//				while(a[i][j]>a[i][k]){
//	//					temp = a[i][j];
//	//					a[i][j]=a[i][k];
//	//					a[i][k]=temp;
//	//				}
//	//			}
//	//		}
//	//	}
//	//	for(i=0;i<n;i++){
//	//		for(j=0;j<limit[i];j++){
//	//			printf("%c",a[i][j]);
//	//		}
//	//	}
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int num[10000] = { 0 };
//    int cha[10000] = { 0 };
//    for(int i=0;i<n;i++)
//        scanf("%d", &num[i]);
//    for (int j = 1; j < n; j++)
//    {
//        cha[j] = num[j - 1] - num[j];
//        if (cha[j] < 0)
//            cha[j] = -cha[j];
//    }
//    for (int i = 1; i < n; i++)
//    {
//        for (int j = 1; j < n; j++)
//        {
//            if (cha[j] < cha[j + 1])
//            {
//                int tmp = cha[j];
//                cha[j] = cha[j + 1];
//                cha[j + 1] = tmp;
//            }
//        }
//    }
//    if (cha[1] != n - 1 || cha[n - 1] != 1)
//    {
//        printf("Not jolly");
//        return 0;
//    }
//    for (int i = 1; i < n - 1; i++)
//    {
//        if (cha[i] - cha[i + 1] != 1)
//        {
//            printf("Not jolly");
//            return 0;
//        }
//    }
//    printf("Jolly");
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    char num[10000] = { 0 };
//    int i = 0;
//    double a = 1;  
//    for (i = 0;; i++)
//    {
//        a = pow((i + 1), 0.5);
//        if (i == a * a)
//        {
//            break;
//        }
//        scanf_s(" %c", &num[i]);    
//    }
//    printf("%d ", a);
//    int cnt1 = 0 ;
//    for (int j = 0; j < i; j++)
//    {
//        if (num[j] == '0')
//        {
//            cnt1++;
//            if (num[j + 1] == '1')
//            {
//                printf("%d ", cnt1);
//                cnt1 = 0;
//            }
//            
//        }
//        else if(num[j]=='1')
//        {
//            cnt1++;
//            if (num[j + 1] == '0')
//            {
//                printf("%d ", cnt1);
//                cnt1 = 0;
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a = 0, b = 0, c = 0;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    double q = 0;
//    q = 0.5 * (a + b + c);
//    double mianji = pow((q * (q - a) * (q - b) * (q - c)), 0.5);
//    printf("%.1lf", mianji);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char ch[1000000] = { 0 };
//    for (int i = 0;; i++)
//    {
//        scanf("%c", &ch[i]);
//        if (ch[i] == '\n')
//            break;
//    }
//    int sum = 0;
//    int p = 1;
//    int cnt = 0;
//    for (int i = 0; i < 1000000; i++)
//    {
//        if (ch[i] == '\n')
//            break;
//        else if (ch[i] == '1' && ch[i + 1] == '0' && ch[i - 1] == '0')
//            i + 1;
//        else if (ch[i] == '1' && p % 2 != 0)
//        {
//            cnt++;
//            if (ch[i + 1] == '0'/* || ch[i + 1] == '\n'*/)
//            {
//                p++;
//                sum += (cnt * cnt);
//                cnt = 0;
//            }
//        }
//        else if (ch[i] == '1' && p % 2 == 0)
//        {
//            cnt++;
//            if (ch[i + 1] == '0'/*||ch[i+1]=='\n'*/)
//            {
//                p++;
//                sum -= (cnt * cnt);
//                cnt = 0;
//            }
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n = 0, k = 0;
//    scanf("%n %k\n", &n, &k);
//    int num[10000] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &num[i]);
//    }
//    for (int i = 1; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (num[j - 1] ^ num[j] < pow(2, k))
//                num[j - 1] = num[j];
//        }
//    }
//   
//    return 0;
//}
//#include<stdio.h>                                  开灯问题  
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    double num1[1000] = { 0 };
//    int num2[10000] = { 0 };
//    int num3[100][10000] = { 0 };
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%lf %d", &num1[i], &num2[i]);
//    }
//    for (int i = 0; i < a; i++)
//    {
//        int b = 1;
//        for (int j = 0,  b  = 1; j < num2[i], a <= num2[i]; j++)
//        {
//            num3[i][j] = num1[j] * a;
//        }
//    }
//
//    return 0;
//}
//#include<stdio.h>                     单词覆盖
//int main()
//{
//    char ch[256] = { 0 };
//    scanf("%s", &ch);
//    int cnt1 = 0, cnt2 = 0;
//    for (int i = 0; ch[i] != '\0'; i++)
//    {
//        if (ch[i] == 'b')
//        {
//            cnt1++;
//            if (ch[i + 1] == 'o')
//            {
//                i++;
//                if (ch[i + 1] == 'y')
//                    i++;
//            }
//        }
//        else if (ch[i] == 'o')
//        {
//            cnt1++;
//            if (ch[i + 1] == 'y')
//                i++;
//        }
//        else if (ch[i] == 'y')
//            cnt1++;
//        else if (ch[i] == 'g')
//        {
//            cnt2++;
//            if (ch[i + 1] == 'i')
//            {
//                i++;
//                if (ch[i + 1] == 'r')
//                {
//                    i++;
//                    if (ch[i + 1] == 'l')
//                        i++;
//                }
//            }
//        }
//        else if (ch[i] == 'i')
//        {
//            cnt2++;
//            if (ch[i + 1] == 'r')
//            {
//                i++;
//                if (ch[i + 1] == 'l')
//                    i++;
//            }
//        }
//        else if (ch[i] == 'r')
//        {
//            cnt2++;
//            if (ch[i + 1] == 'l')
//                i++;
//        }
//        else if (ch[i] == 'l')
//        {
//            cnt2++;
//        }
//    }
//    printf("%d\n%d", cnt1, cnt2);
//    return 0;
//}
//#include<stdio.h>                      小玉交电费
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    double ret = 0;
//    if (n <= 150)
//    {
//        ret = n * 0.4463;
//    }
//    else if (n > 150)
//    {
//        ret = 150 * 0.4463;
//        n -= 150;
//        if (n <= 250)
//        {
//            ret = ret + n * 0.4663;
//        }
//        else
//        {
//            ret = ret + 250 * 0.4663;
//            n -= 250;
//            ret = ret + n * 0.5663;
//        }
//    }
//    printf("%.1lf", ret);
//    return 0;
//}
//#include<stdio.h>                 小玉在游泳
//int main()
//{
//    double n = 0;
//    scanf("%lf", &n);
//    double tmp = 2, x = 2;
//    int i = 0;
//    for (i = 1; tmp < n; i++)
//    {
//        x = x * 0.98;
//        tmp += x;
//    }
//    printf("%d", i);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0, num[1000] = { 0 };
//    scanf("%d", &n);
//    int cnt1 = 1;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &num[i]);
//    }
//    int tmp = 1;
//    for (int i = 0; i < n; i++)
//    {
//        cnt1 = 1;
//        if (num[i] - num[i - 1] == 1)
//        {
//            cnt1++;
//            for (int j = i+1;; j++)
//            {
//                if (num[j] - num[j - 1] == 1)
//                {
//                    cnt1++;
//                    i = j;
//                }
//                else
//                    break;
//            }
//        }
//        if (tmp <= cnt1)
//        {
//            tmp = cnt1;
//        }
//    }
//    printf("%d", tmp);
//    return 0;
//}
//#include<stdio.h>                 小鱼的航程
//int main()
//{
//    long a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    int c = 0, cnt = 0;
//    for (cnt = 0; cnt < b; cnt++)
//    {
//        if (a < 6)
//        {
//            c++;
//            a++;
//        }
//        else if ( a == 6)
//        {
//            a++;
//            cnt++;
//        }
//        if (a == 7)
//        {
//            a = 1;
//        }
//    }
//    printf("%d", c * 250);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    double s = 0, x = 0, a = 7.0;
//    scanf("%lf %lf", &s, &x);
//    double sum = 0.0; //小鱼游的距离和
//
//    for (int i = 0;; i++)
//    {
//        
//        if (sum + a > s + x)  //如果小鱼下一步直接跳过陷阱就安全
//        {
//            printf("n");
//            break;
//        }
//        else if (sum + a >= s - x && sum + a <= s + x)//如果小鱼下一步在陷阱内
//        {
//            if (sum + a <= s + x)//如果小鱼下一秒没出陷阱就危险
//            {
//                printf("y");
//                break;
//            }
//            else//下一秒出陷阱安全
//            {
//                printf("n");
//                break;
//            }
//        }
//        sum = sum + a;//小鱼下一秒的距离和
//        a *= 0.98;//小鱼下一秒的距离
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    long long num[101] = { 0 };
//    for (int i = 0; i < 101; i++)
//    {
//        num[i] = 1;
//    }
//    int i = 0, j = 0;
//    for (i = 0; num[i-1] != 0; i++)
//    {
//        scanf("%d", &num[i]);
//    }
//    for (int j = 0; j < i - 1; j++)
//    {
//        for (int w = 1; w < i-1-j; w++)
//            {
//                int tmp = num[w];
//                num[w] = num[w - 1];
//                num[w - 1] = tmp;
//            }
//    }
//    for (int w = 0; w < i-1; w++)
//    {
//        if (w != i - 1)
//            printf("%d ", num[w]);
//        else
//            printf("%d", num[w]);
//    }
//    return 0;
//}
#include<stdio.h>             //小鱼比可爱
//int main()
//{
//    int n = 0, num[1000] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &num[i]);
//    }
//    for (int j =0; j < n; j++)
//    {
//        int cnt = 0;
//        for (int w = j-1; w >= 0; w--)
//        {
//            if (num[j] > num[w])
//            {
//                cnt++;
//            }
//        }
//        printf("%d ", cnt);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0;
//    scanf("%d/%d %d/%d", &a, &b, &c, &d);
//    int num1 = 0, num2 = 0;
//    num1 = a * c;
//    num2 = b * d;
//    int tmp1 = num1, tmp2 = num2;
//    int i = 0;
//    while (tmp2 != 0)
//    {
//        i = tmp1 % tmp2;
//        tmp1 = tmp2;
//        tmp2 = i;
//    }
//    int w = num1 / tmp1, j = num2 / tmp1;
//    printf("%d %d", w, j);
//    
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int tmp = 0;
//    int tmp1 = 0;
//    for (int i = 0; i < n; i++)
//    {
//        int a = 0, b = 0;
//        scanf("%d %d", &a, &b);
//        tmp = tmp + a + b - 8;
//        tmp1 += tmp;
//    }
//    printf("%d", tmp1);
//    return 0;
//}
//#include<stdio.h>                      棋盘问题
//int main()
//{
//    int N = 0, M = 0, cnt1 = 0, cnt2 = 0;
//    scanf("%d %d", &N, &M);
//    for (int i = 1; i <= N; i++)
//    {
//        for (int j = 1; j <= M; j++)
//        {
//            if (i != j)
//            {
//
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>                  梦中计数
//int main()
//{
//    int M = 0, N = 0;
//    scanf("%d %d", &M, &N);
//    int num[10] = { 0 };
//    for (int i = M; i <= N; i++)
//    {
//        int tmp = i;
//        while (tmp > 0)
//        {
//            int a = tmp % 10;
//            for (int j = 0; j < 10; j++)
//            {
//                if (a == j)
//                {
//                    num[j]++;
//                    break;
//                }
//            }
//            tmp /= 10;
//        }
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ", num[i]);
//    }
//    return 0;
//}
//#include<stdio.h>                        数天数
//int main()
//{
//    long N = 0, cnt = 1;
//    scanf("%d", &N);
//    int num[100000] = { 0 };
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%d", &num[i]);
//    }
//    int tmp = 1;
//    for (int j = 1; j < N; j++)
//    {
//        if (num[j] > num[j - 1])
//        {
//            cnt++;
//        }
//        else if (num[j] <= num[j - 1])
//        {
//            if (tmp <= cnt)
//                tmp = cnt;
//            cnt = 1;
//        }
//        if (tmp <= cnt)
//            tmp = cnt;
//    }
//    printf("%d", tmp);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char str[256] = { 0 };
//    int ret[126] = { 0 };
//    gets(str);
//    for (int i = 0; str[i] != 0; i++)
//    {
//        if (i - 1 >= 0 && str[i] == ':' && str[i + 1] == '=' && str[i + 3] == ';')
//        {
//            if (str[i + 2] >= '0' && str[i + 2] <= '9')
//            {
//                ret[str[i - 1]] = str[i + 2] - 48;
//            }
//            if (str[i + 2] >= 'a' && str[i + 2] <= 'c')
//            {
//                ret[str[i - 1]] = ret[str[i + 2]];
//            }
//        }
//    }
//    printf("%d %d %d", ret['a'], ret['b'], ret['c']);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int m = 0, n = 0, num[3000] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &num[i]);
//    }
//    int j = 0;
//    int ret = 1000000;
//    for (int i = m-1; i < n; i++)
//    {
//        int tmp = 0;
//        for (j = i-m+1; j <= i; j++)
//        {
//            tmp += num[j];
//        }
//        if (tmp < ret)
//        {
//            ret = tmp;
//        }
//    }
//    printf("%d", ret);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int start[10] = { 0 }, end[10] = { 0 }, tmp[10] = { 0 };
//    scanf("%d:%d:%d", &start[0], &start[1], &start[2]);
//    scanf("%d:%d:%d", &end[0], &end[1], &end[2]);
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    for (int i = 2; i > 0; i--)
//    {
//        if (start[i] <= end[i])
//            tmp[i] = end[i] - start[i];
//        else
//        {
//            tmp[i] = end[i] + 60 - start[i];
//            end[i - 1] -= 1;
//        }
//    }
//    sum = end[0] + start[0] * 3600 + tmp[1] * 60 + tmp[2];
//    printf("%d", sum * n);
//    return  0;
//}
//#include<stdio.h>
//int main()
//{
//    int x = 0, n = 0;
//    scanf("%d %d", &n, &x);
//    long long sum = 0, tmp = 1;
//    for (int i = 1; i <= 10; i++)
//    {
//        sum = tmp * (x + 1);
//        tmp = sum;
//    }
//    printf("%lld", sum);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int main()
//{
//    int n = 0, num[3][51] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            scanf("%d", &num[i][j]);
//        }
//    }
//    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
//    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
//    /*double k = 0, m = 0;
//    k = (y2 - y1) / (x2 - x1);
//    m = y2 - k * x2;*/
//    double far[51] = { 0 }, far1[51] = { 0 };
//    int cnt = 0;
//    for (int i = 0; i < n; i++)
//    {
//        /*far[i] = abs(k * num[0][i] + m - num[1][i]) / pow(k * k + 1, 0.5);
//        if (far[i] == num[2][i])
//            cnt++;
//        else if (far[i] < num[2][i])
//            cnt += 2;*/
//        far[i] = pow(pow(x1 - num[0][i], 2) + pow(y1 - num[1][i], 2), 0.5);
//        far1[i] = pow(pow(x2 - num[0][i], 2) + pow(y2 - num[1][i], 2), 0.5);
//        if (far[i] < (double)num[2][i] && far1[i] < (double)num[2][i])
//            ;
//        else if (far1[i] < (double)num[2][i])
//            cnt++;
//        else if (far[i] < (double)num[2][i])
//            cnt++;
//    }
//    printf("%d", cnt);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int N = 0, day[10000] = { 0 }, cnt = 0;
//    long long fen = 0;
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%d", &day[i]);
//        if (day[i] == 1&&day[i-1]!=0)
//        {
//            cnt++;
//            if (cnt >= 1 && cnt < 3)
//            {
//                fen++;
//            }
//            else if (cnt >= 3 && cnt < 7)
//            {
//                fen += 2;
//            }
//            else if (cnt >= 7 && cnt < 30)
//            {
//                fen += 3;
//            }
//            else if (cnt >= 30 && cnt < 120)
//            {
//                fen += 4;
//            }
//            else if (cnt >= 120 && cnt < 365)
//            {
//                fen += 5;
//            }
//            else
//            {
//                fen += 6;
//            }
//        }
//        else if (day[i] == 1 && day[i-1] == 0)
//        {
//            if (day[i - 2] != 1)
//                cnt--;
//            if (cnt < 0)
//                cnt = 0;
//            if (cnt >= 1 && cnt < 3)
//            {
//                fen++;
//                cnt++;
//            }
//            else if (cnt >= 3 && cnt < 7)
//            {
//                fen += 2;
//                cnt++;
//            }
//            else if (cnt >= 7 && cnt < 30)
//            {
//                fen += 3;
//                cnt++;
//            }
//            else if (cnt >= 30 && cnt < 120)
//            {
//                fen += 4;
//                cnt++;
//            }
//            else if (cnt >= 120 && cnt < 365)
//            {
//                fen += 5;
//                cnt++;
//            }
//            else if(cnt>=365)
//            {
//                fen += 6;
//                cnt++;
//            }
//        }
//        else if (day[i] == 0)
//        {
//            cnt--;
//            if (cnt < 0)
//                cnt = 0;
//        }
//    }
//    printf("%lld", fen);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    double Fn = 0.0;
//    double a = pow(5, 0.5);
//    Fn = (pow((1 + a) / 2, n) - pow((1 - a) / 2, n)) / a;
//    printf("%.2lf", Fn);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char ch[256] = { 0 };
//    scanf("%s", &ch);
//    int cnt = 0;
//    for (int i = 0; ch[i] != '@'; i++)
//    {
//        if (ch[i] == '(')
//            cnt++;
//        else if (ch[i] == ')')
//            cnt--;
//    }
//    if (cnt == 0)
//        printf("YES");
//    else
//        printf("NO");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char ch[256] = { 0 };
//    int cnt = 0;
//    for (int i = 0; ch[i-1] != '\n'; i++)
//    {
//        scanf("%c", &ch[i]);
//    }
//    for (int i = 0; ch[i] != 0; i++)
//    {
//        if (ch[i] >= 'a' && ch[i] <= 'o')
//        {
//            int a = (ch[i] - 96) % 3;
//            cnt += a;
//            if (a == 0)
//                cnt += 3;
//        }
//        else if (ch[i] >= 'p' && ch[i] <= 's')
//        {
//            int a = (ch[i]-111) % 4;
//            cnt += a;
//            if (a == 0)
//                cnt += 4;
//        }
//        else if (ch[i] >= 't' && ch[i] <= 'v')
//        {
//            int a = (ch[i] - 115) % 3;
//            cnt += a;
//            if (a == 0)
//                cnt += 3;
//        }
//        else if (ch[i] >= 'w' && ch[i] <= 'z')
//        {
//            int a = (ch[i] - 118) % 4;
//            cnt += a;
//            if (a == 0)
//                cnt += 4;
//        }
//        else if (ch[i] == ' ')
//            cnt++;
//    }
//    printf("%d", cnt);
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n = 0, m = 0, k = 0;
    char ch[100][100] = { 0 };
    scanf_s("%d %d %d", &n, &m, &k);
    int zuobiao[25][2] = { 0 },zuobiao1[5][2] = { 0 };
    for (int i = 0; i < m; i++)
    {
        scanf_s("%d %d", &zuobiao[i][0], &zuobiao[i][1]);
        ch[zuobiao[i][0] - 3][zuobiao[i][1]-1] = ch[zuobiao[i][0] - 2][zuobiao[i][1]-1] = ch[zuobiao[i][0]-1][zuobiao[i][1]-1] = ch[zuobiao[i][0]][zuobiao[i][1]] = ch[zuobiao[i][0] + 1][zuobiao[i][1]-1] = '1';
        ch[zuobiao[i][0]-1][zuobiao[i][1] - 3] = ch[zuobiao[i][0]-1][zuobiao[i][1] - 2] = ch[zuobiao[i][0]-1][zuobiao[i][1]] = ch[zuobiao[i][0]-1][zuobiao[i][1]] = ch[zuobiao[i][0]-1][zuobiao[i][1] + 1] = '1';
        ch[zuobiao[i][0] - 2][zuobiao[i][1] - 2] = ch[zuobiao[i][0] - 2][zuobiao[i][1]] = ch[zuobiao[i][0]][zuobiao[i][1]-2] = ch[zuobiao[i][0]][zuobiao[i][1]] = '1';
        ch[zuobiao[i][0] - 1][zuobiao[i][1] - 1] = '1';
    }
    for (int i = 0; i < k; i++)
    {
        scanf_s("%d %d", &zuobiao1[i][0], &zuobiao1[i][1]);
        for (int w = zuobiao1[i][0] - 3; i <= zuobiao1[i][0] + 1; w++)
        {
            for (int j = zuobiao1[i][1] - 3; j <= zuobiao1[i][1] + 1; j++)
            {
                ch[w][j] = '1';
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ch[i][j] == 0)
            {
                cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}