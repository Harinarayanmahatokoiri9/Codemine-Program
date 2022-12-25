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
    for(i=0;i<s;i++)
    {
        int	j=0,sum=0;
        while(j<s)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                sum++;
            }
            j++;
        }
        if(sum==0)
        {
	printf("%d ",arr[i]);
        }
    }
}