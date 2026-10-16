#include<stdio.h>

int main()
{
    int sum=0;

    for(int i=1;i<101;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;

        }
    }

    printf("1~100µÄÆæÊıºÍ%d\n",sum);

    return 0;
}