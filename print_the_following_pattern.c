#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,r;
	scanf("%d",&r);
	for(i=r-1;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		{
			printf("%c ",'A'+i);
		}
		printf("
");
	}
}