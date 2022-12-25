#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n],k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int c,count=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(k==c)
        {
            count++;
            for(j=0;j<n;j++)
            {
                if(arr[i]==arr[j] && i!=j)
                {
                    arr[j]=0;
                }
            }
            if(arr[i]!=0)
            {
                printf("%d ",arr[i]);
            }
        }
    }
    if(count==0)
    {
        printf("-1");
    }
}