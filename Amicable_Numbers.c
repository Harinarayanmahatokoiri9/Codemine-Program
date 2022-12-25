#include<stdio.h>
int main()
{
    int a,b,i,j,asum=0,bsum=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            asum+=i;   
        }
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        {
            bsum+=i;   
        }
    }
    if(bsum==a && asum==b)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}