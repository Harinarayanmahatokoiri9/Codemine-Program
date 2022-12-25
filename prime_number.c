#include<stdio.h>
void prime(int a)
{
	int i,count=0;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("prime");
	}
	else
	{
		printf("not a prime");
	}
}
int main()
{
	int n,r;
	scanf("%d",&n);
	prime(n);
}