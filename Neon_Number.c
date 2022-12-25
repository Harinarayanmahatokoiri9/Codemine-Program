#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s,r;
    s=n*n;
    int sum=0;
    while(s)
    {
        r=s%10;
        s=s/10;
        sum+=r;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}