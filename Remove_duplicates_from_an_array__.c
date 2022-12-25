#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=0,j,count=0;
	scanf("%d",&n);
	int arr[n],a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				arr[j]=-1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==-1)
			continue;
		printf("%d ",arr[i]);
	}
}