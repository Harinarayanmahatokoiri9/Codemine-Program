#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,arrr[100];
	scanf("%d",&a);
	int arr[a],ar[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<a;i++)
	{
		arrr[100]=arr[i]+ar[i];
		printf("%d ",arrr[100]);
	}
}