#include<stdio.h>
int main()
{
    int s,r,sum=0;
    scanf("%d",&s);
    int arr[s],i;
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<s;i++)
    {
        int count=0,x;
        x=arr[i];
        while(x!=0)
        {
            r=x%10;
            count++;
            x=x/10;
        }
        if(count%2==0)
        {
            sum++;
        }
    }
    printf("%d",sum);
}