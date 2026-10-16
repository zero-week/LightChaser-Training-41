#include<stdio.h>

struct student
{
    char name[100];
    double score;
};

int main()
{
    int n;
    printf("请输入学生人数\n");
    scanf("%d",&n);
    struct student report[n];

    for(int i=0;i<n;i++)
    {
        printf("输入学生名字与分数\n");
        struct student temp=report[i];
        scanf("%s %lf",report[i].name,&report[i].score);
    }

    int count=1;
    for(int i=0;i<n;i++)
    {
        
        printf("第%d位同学的名字是%s,分数是%lf\n",count,report[i].name,report[i].score);
        count++;
    }
    

    return 0;
}