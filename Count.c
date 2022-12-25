#include<stdio.h>
int main()
{
    int s,x,oco=0,eco=0;
    scanf("%d",&s);
    int i,arr[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<s;i++)
    {
        x=arr[i];
        if(x%2==0)
        {
            eco++;
        }
        else if(x%2!=0)
        {
            oco++;
        }
    }
    printf("%d %d",eco,oco);
}