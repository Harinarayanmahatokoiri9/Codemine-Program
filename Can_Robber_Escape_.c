#include<stdio.h>
int main()
{
    int s,i,count=0;
    scanf("%d",&s);
    int arr[i];
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<s;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    if(count>2)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}