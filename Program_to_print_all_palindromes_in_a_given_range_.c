#include<stdio.h>
int rev(int n)
{
    int r,sum=0;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    return sum;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i==rev(i))
        {
            printf("%d ",i);
        }
    }
}