#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(n%(i+1)==0)
            {
                if(i*(i+1)==n)
                {
                    c++;
                    break;
                }
            }
        }
    }
    if(c==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}