#include<stdio.h>
int main()
{
	char str[1000];
	scanf("%s",str);
	int j,count=0;
	for(j=0;str[j]!=NULL;j++)
	{
		if(str[j]>=48 && str[j]<=57)
		{
			count++;
		}
	}
	if(count!=0)
	{
	    printf("Contains %d digit",count);
	}
	else
	{
	    printf("Doesn't contain digit");
	}
}