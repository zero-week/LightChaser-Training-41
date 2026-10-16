#include<stdio.h>

int main()
{
    double a;
    double b;
    double res;
    char op;
    printf("请输入算式,例如1+1\n");
    scanf("%lf %c %lf",&a,&op,&b);
    switch(op)
    {
        case'+':
            res=a+b;
            printf("结果是%.2lf\n",res);
            break;
        case'-':
            res=a-b;
            printf("结果是%.2lf\n",res);
            break;
        case'*':
            res=a*b;
            printf("结果是%.2lf\n",res);
            break;
        case'/':
            if(b==0)
            {
                printf("出错\n");
                break;
            }
            else
            {
                res=a/b;
                printf("结果是%.2lf\n",res);
                break;
            }
        default:
            printf("运算符出错\n");

    }
    return 0;


}