#include<stdio.h>
#include<math.h>
long long d(long long x)
{
    long long r,i=1,out=0;
    while(x>0)
    {
        r=x%2;
        x=x/2;
        out+=r*i;
        i*=10;
    }
    return out;
}
int main()
{
    long long n,r,x,ans=0,count=0;
    scanf("%lli",&n);
    while(n>0)
    {
        r=n%10;
        x=r*(pow(8,count));
        ans+=x;
        n=n/10;
        count++;
    }
    printf("%lli",d(ans));
}