#include<stdio.h>
int main()
{
	int n,i,check,amount=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&check);
	for(i=0;i<n;i++)
	{
		if(arr[i]>check)
		{
			amount+=2;
		}
		else
		{
			amount++;
		}
	}
	printf("%d",amount);
}