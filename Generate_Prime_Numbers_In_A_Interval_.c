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
		printf("%d
",a);
	}
}
int main()
{
	int a,b,r,i;
	scanf("%d%d",&a,&b);
	for(i=a+1;i<=b;i++)
	{
		prime(i);
	}
}