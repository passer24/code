#include<stdio.h>
//int main()
//{
    //printf("%d\n",sizeof(char));
    //printf("%d\n",sizeof(short));
    //printf("%d\n",sizeof(int));
    //printf("%d\n",sizeof(long));
    //printf("%d\n",sizeof(long long));
    //printf("%d\n",sizeof(float));
    //printf("%d\n",sizeof(double));
    //system("pause");
    //return 0;

//}
    // int num1=20;
    // int main()
    // {
    //     int num2=10;
    //     printf("%d\n",num2);//局部变量只可在局部使用
    //     system("pause");
    //     return 0;
    // }
    int main()
    {
    int num1=0;
    int num2=0;
    scanf("%d%d",&num1,&num2);//使用输入函数
    int sum = num1+num2;
    printf("sum=%d\n",sum);//c语言语法规定，变量要定义在代码块最前面
    system("pause");
    return 0;
    }