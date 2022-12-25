#include<stdio.h>
int main()
{
	int a,b,w,h;
	scanf("%d%d",&a,&b);
	while(b--)
	{
		scanf("%d%d",&w,&h);
		if(w<a || h<a)
		{
			printf("UPLOAD ANOTHER
");
		}
		else if(w==h)
		{
			printf("ACCEPTED
");
		}
		else
		{
			printf("CROP IT
");
		}
	}
}