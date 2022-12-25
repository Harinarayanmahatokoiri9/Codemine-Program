#include<stdio.h>
int is_prime(int n)
{
	int i;
	if(n==1)
	{
		return 0;
	}
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int primes_in_a_range(int a,int b)
{
	int i,count=0;
	for(i=a;i<=b;i++)
	{
		if(is_prime(i))
		{
		    count++;
	    }
	}
	return count;
}
int main()
{
    int x,y,k;
    scanf("%d%d",&x,&y);
    k=primes_in_a_range(x,y);
    printf("%d",k);
}