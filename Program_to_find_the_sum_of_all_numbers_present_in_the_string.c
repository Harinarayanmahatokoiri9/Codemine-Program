#include<stdio.h>
#include<stdio.h>
int main()
{
	char str[1000];
	scanf("%[^
]s",str);
	int i,sum=0;
	for(i=0;str[i]!=NULL;i++)
	{
		int x=str[i];
		if(x>='0' && x<='9')
		{
			x=x-48;
			sum=sum+x;
		}
	}
	printf("%d",sum);
}