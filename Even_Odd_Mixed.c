#include<stdio.h>
int main()
{
    int n,r,sum=0,count=0,sume=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        {
            count++;
        }
        else
        {
            sum++;
        }
        n=n/10;
        sume++;
    }
    if(sum==sume)
    {
        printf("Odd");
    }
    if(count==sume)
    {
        printf("Even");
    }
    else if(count!=sume && sum!=sume)
    {
        printf("Mixed");
    }
}