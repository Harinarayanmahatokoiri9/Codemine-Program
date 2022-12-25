#include<stdio.h>
int main()
{
	int n,i,max=0,add;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>=max)
		{
			max=arr[i];
		}
	}
	scanf("%d",&add);
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i]+add;
		if(arr[i]>=max)
		{
			printf("True ");
		}
		else
		{
			printf("False ");
		}
	}
}