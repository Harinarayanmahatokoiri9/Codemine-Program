#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,i=0,j;
	scanf("%d",&a);
	if(a<=2)
	{
		printf("The pattern is not possible");
		exit(0);
	}
	for(i=1;i<a;i++)
	{
		for(j=0;j<i;j++)
			printf("*");
		printf("
");
	}
	for(i=0;i<a;i++)
	{
		for(j=a-1;j>=i;j--)
			printf("*");
		printf("
");
	}
}