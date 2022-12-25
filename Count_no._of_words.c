#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,count=0;
	char ch[100];
	fgets(ch,sizeof(ch),stdin);
	for(i=0;i<strlen(ch);i++)
	{
		if(ch[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count+1);
}