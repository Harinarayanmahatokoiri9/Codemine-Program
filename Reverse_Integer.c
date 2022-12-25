#include<stdio.h>
int main()
{
    int a,i,r,rev=0;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    printf("%d",rev);
}