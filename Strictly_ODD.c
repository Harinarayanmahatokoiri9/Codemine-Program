#include<stdio.h>
int main()
{
    int s,i,arr[s];
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(i=0;i<s;i++)
    {
        if(arr[i]%2!=0)
        {
            if(i%2==0)
            {
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}