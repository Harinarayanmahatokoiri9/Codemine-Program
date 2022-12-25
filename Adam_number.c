#include<stdio.h>
int main()
{
    int n,sn,rn=0,r,rsn,a,sn1=0;
    scanf("%d",&n);
    sn=n*n;
    while(n!=0)
    {
        r=n%10;
        rn=rn*10+r;
        n=n/10;
    }
    rsn=rn*rn;
    while(rsn!=0)
    {
        a=rsn%10;
        sn1=sn1*10+a;
        rsn=rsn/10;
    }
    if(sn1==sn)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}