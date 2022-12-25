#include<stdio.h>
int main()
{
    int s;
    float a,sum=0;
    scanf("%d",&s);
    a=s;
    int i,arr[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<s;i++)
    {
        sum+=arr[i];
    }
    printf("%.2f",sum/a);
}