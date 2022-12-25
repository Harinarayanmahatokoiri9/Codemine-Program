#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++)
	{
		b=sqrt(arr[i]);
		if(b==sqrt(arr[i]))
		{
			printf("True
");
		}
		else
		{
			printf("False
");
		}
	}
}
