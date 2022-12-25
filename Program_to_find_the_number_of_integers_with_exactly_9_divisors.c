#include<stdio.h>
int main()
{
	int a,i=1,count=0;
	scanf("%d",&a);
	for(i;i<=a;i++)
	{
		int sum=0,j=1;
		while(j<=i)
		{
			if(i%j==0)
			{
				sum++;
			}
			j++;
		}
		if(sum==9)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("
Total=%d",count);
}