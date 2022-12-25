#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,temp=0,fac;
    scanf("%d",&n);
    int k=n;
    while(1)
    {
        k++;
        int j,sum=0,res=0;
        for(j=1;j<=sqrt(k);j++)
        {
            if(k%j==0)
            {
                sum++;
            }
        }
        if(sum==1)
        {
            int x=k,a,ans=0;
            while(x>0)
            {
                a=x%10;
                ans=ans*10+a;
                x=x/10;
            }
            if(ans==k)
            {
                res=1;
                break;
            }
        }
    }
    printf("%d",k);
}