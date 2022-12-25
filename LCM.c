#include<stdio.h>
int main()
{
    int a,b,g,l,c,d;
    scanf("%d%d",&a,&b);
    c=a;
    d=b;
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    g=a;
    l=c*d/g;
    printf("%d",l);
}