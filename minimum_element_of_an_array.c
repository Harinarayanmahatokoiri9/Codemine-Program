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
    int min=arr[0];
    for(i=1;i<s;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d",min);
}