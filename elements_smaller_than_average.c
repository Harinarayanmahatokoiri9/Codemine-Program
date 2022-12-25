#include<stdio.h>
int main()
{
    int s,i,arr[s],sum=0;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int avg,count=0;
    avg=sum/s;
    for(i=0;i<s;i++)
    {
        if(arr[i]<=avg)
        {
            count++;
        }
    }
    printf("%d",count);
}