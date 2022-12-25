#include<stdio.h>
int main()
{
    int n;
    float i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=1/i;
    }
    printf("%.2f",sum);
}