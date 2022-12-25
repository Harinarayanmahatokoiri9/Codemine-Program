#include<stdio.h>
int main()
{
	int a,b,i,pro=1,j;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++)
	{
		pro=1;
		for(j=arr[i];j>0;j--)
		{
			pro=pro*j;
		}
		printf("%d
",pro);
	}
}