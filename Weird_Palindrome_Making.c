#include<stdio.h>
int main()
{
	int t,q;
	scanf("%d",&t);
	for(q=0;q<t;q++)
	{
		int n,i,a,c=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		    scanf("%d",&a);
			if(a%2==1)
			{
				c++;
			}
		}
		if(c%2==1)
		{
			c--;
		}
		printf("%d
",c/2);
	}
}