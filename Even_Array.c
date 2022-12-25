#include<stdio.h>
int main()
{
    int s,i,arr[s],count=0;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<s;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
    }
    if(count==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}