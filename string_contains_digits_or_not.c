#include<stdio.h>
int main()
{
	int s;
	scanf("%d",&s);
	int i;
	for(i=0;i<s;i++)
	{
		char str[1000];
		scanf("%s",str);
		int j,count=0,sum=0;
		for(j=0;str[j]!=NULL;j++)
		{
			if(str[j]>=48 && str[j]<=57)
			{
				count++;
			}
			sum++;
		}
		if(sum-count==sum)
		{
			printf("No
");
		}
		else
		{
			printf("Yes
");
		}
	}
}