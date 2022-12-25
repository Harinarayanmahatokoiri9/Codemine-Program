#include<stdio.h>
int main()
{
    int n,a,sum=0,product=1,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        product*=r;
        sum+=r;
        n=n/10;
    }
    a=product-sum;
    printf("%d",a);
}