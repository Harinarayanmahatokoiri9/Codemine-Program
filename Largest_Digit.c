#include<stdio.h>
int main()
{
    int a,r,lar=0;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        a/=10;
        if(lar<r)
        {
            lar=r;
        }
    }
    printf("%d",lar);
}