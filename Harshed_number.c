#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,r,sum=0;
    a=n;
    while(a)
    {
        r=a%10;
        a=a/10;
        sum+=r;
    }
    if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}