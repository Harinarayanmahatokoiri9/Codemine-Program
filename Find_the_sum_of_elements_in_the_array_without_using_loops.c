#include<stdio.h>
int main()
{
    int s,sum=0;
    scanf("%d",&s);
    int arr[s],i;
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<s;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
}