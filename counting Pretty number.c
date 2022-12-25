#include<stdio.h>
int main()
{
	int t,n,m,num,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		num=0;
		while(n<=m)
		{
			p=n%10;
			if(p==3 || p==2 || p==9)
			{
				num++;
			}
			n++;
		}
		printf("%d",num);
	}
}