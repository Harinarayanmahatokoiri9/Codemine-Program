#include<stdio.h>
#include<math.h>
int main()
{
	int a,x,r,ans=0;
	scanf("%d",&a);
	while(a>0)
	{
		r=a%10;
		ans+=pow(r,2);
		a=a/10;
		if(a==0 && ans<10)
		{
			if(ans==1 || ans==7)
			{
				printf("True");
				break;
			}
			else
			{
				printf("False");
				break;
			}
			
		}
		else if(a==0 && ans>=10)
		{
			a=ans;
			r=0;
			ans=0;
		}
	}
}