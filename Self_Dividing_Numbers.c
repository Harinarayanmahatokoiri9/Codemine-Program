#include<stdio.h>
int main()
{
	int a,b,x,r;
	scanf("%d%d",&a,&b);
	for(a;a<=b;a++)
	{
		int count=0;
		x=a;
		while(x>0)
		{
			r=x%10;
			if(r==0)
			{
				count++;
				break;
			}
			if(a%r!=0)
			{
				count++;
			}
			x=x/10;
		}
		if(count==0)
		{
			printf("%d ",a);
		}
	}
}