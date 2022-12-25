#include<stdio.h>
int main()
{
	int size,i,min;
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=1;i<size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	while(min>=1)
	{
		int count=0;
		for(i=0;i<size;i++)
		{
			if(arr[i]%min==0)
			{
				count++;
			}
		}
		if(count==size)
		{
			printf("%d",min);
			break;
		}
		min--;
	}
}