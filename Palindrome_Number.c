#include<stdio.h>
int main()
{
    int si,r;
    scanf("%d",&si);
    int a[si],i;
    for(i=0;i<si;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<si;i++)
    {
       int x=a[i],sum=0;
        while(x>0)
        {
            r=x%10;
            sum=sum*10+r;
            x=x/10;
        }
        if(sum==a[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}