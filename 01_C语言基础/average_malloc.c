#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("请输入数组元素个数\n");
    scanf("%d",&n);

    int*arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("内存申请失败\n");
        return 1;

    }

    printf("依次输入%d个整数:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    double sum=0;
    
    for(int i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
    double avg=sum/n;
    printf("平均值=%.2lf",avg);

    free(arr);
    arr=NULL;
    return 0;

}