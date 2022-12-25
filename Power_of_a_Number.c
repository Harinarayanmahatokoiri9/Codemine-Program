#include<stdio.h>
int main()
{
    int a,b,c,i,d,pow=1;
    scanf("%d%d%d",&a,&b,&c);
    for(i=1;i<=b;i++)
    {
        pow=pow*a;
    }
    d=pow%c;
    printf("%d",d);
}