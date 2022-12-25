#include<stdio.h>
int main()
{
	long long int a;
	scanf("%lli",&a);
	if(a>6000000000 && a<=9999999999)
	{
		printf("Valid");
	}
	else
	{
		printf("Invalid");
	}
}