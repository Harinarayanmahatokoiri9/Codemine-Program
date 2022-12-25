#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,c,count,j,value=0;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++)
	{
		b=arr[i];
		count=1;
		for(j=i+1;j<a;j++)
		{
			if(b==arr[j] && b!=0)
			{
				arr[j]=0;
				count++;
			}
		}
		if(count>1)
		{
			c=count/2;
			value=value+c;
		}
	}
	printf("%d",value);
}