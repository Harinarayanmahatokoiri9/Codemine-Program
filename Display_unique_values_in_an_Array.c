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
	int j,count,a=0;
	for(i=0;i<s;i++)
	{
		count=0;
		for(j=0;j<s;j++)
		{
			if(arr[i]==arr[j] && i!=j)
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("%d ",arr[i]);
			a++;
		}
	}
	if(a==0)
	{
	    printf("-1");
	}
}