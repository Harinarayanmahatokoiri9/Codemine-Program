#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n],j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]%2!=0 && arr[j]!=0)
            {
                printf("%d ",arr[j]);
                arr[j]=0;
                break;
            }
        }
        for(j=0;j<n;j++)
        {
            if(arr[j]%2==0 && arr[j]!=0)
            {
                printf("%d ",arr[j]);
                arr[j]=0;
                break;
            }
        }
    }
    if(n%2!=0)
    {
        printf("0");
    }
}