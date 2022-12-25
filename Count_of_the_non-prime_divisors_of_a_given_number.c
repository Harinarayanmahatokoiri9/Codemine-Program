#include<stdio.h>
int main()
{
	int N,i=1,count=0;
	scanf("%d",&N);
	for(i;i<=N;i++)
	{
		int sum=0;
		if(N%i==0)
		{
			int j=1;
			while(j<=i)
			{
				if(i%j==0)
				{
					sum++;
				}
				j++;
			}
			if(sum!=2)
			{
				count++;
			}
		}
	}
	printf("%d",count);
}