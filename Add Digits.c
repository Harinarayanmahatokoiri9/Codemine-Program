#include<stdio.h>
int add(int n)
{
    int r,sum=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum+=r;
    }
    if(sum<=9)
    {
        return sum;
    }
    return add(sum);
}
int main()
{
    int a,n;
    scanf("%d",&n);
    a=add(n);
    printf("%d",a);
}