#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int arr[s],i;
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=(s-1);i>=s/2;i--)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<s/2;i++)
    {
        printf("%d ",arr[i]);
    }
}