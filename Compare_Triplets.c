#include<stdio.h>
int main()
{
	int alice=0,bob=0,i,a[3],b[3];
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	scanf("%d%d%d",&b[0],&b[1],&b[2]);
	for(i=0;i<3;i++)
	{
		if(a[i]>b[i])
		{
			alice++;
		}
		else if(a[i]<b[i])
		{
			bob++;
		}
		else
		{
			continue;
		}
	}
	printf("%d %d",alice,bob);
}