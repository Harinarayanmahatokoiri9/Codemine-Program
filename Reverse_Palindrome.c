#include<stdio.h>
int rev(int n)
{
	int r,sum=0;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	return sum;
}
int main()
{
	int a;
	scanf("%d",&a);
	a+=rev(a);
	while(a!=rev(a))
	{
		a+=rev(a);
	}
	printf("%d",a);
}