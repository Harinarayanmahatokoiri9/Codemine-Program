#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int i,arr[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=1;i<s;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);
}