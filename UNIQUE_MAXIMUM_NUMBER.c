#include<stdio.h>
int main()
{
	int n,i,j,res=0,max=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			if(arr[i]>max)
			{
				max=arr[i];
			}
			res=1;
		}
	}
	if(res==0)
	{
		printf("-1");
	}
	else
	{
		printf("%d",max);
	}
}