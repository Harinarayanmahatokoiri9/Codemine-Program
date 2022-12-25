#include<stdio.h>
int main()
{
    int n,a,r,i=0,j;
    scanf("%d",&n);
    a=n;
    int c;
    while(a!=0)
    {
        a=a/10;
        c++;
    }
    int re[c];
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        re[i]=r;
        i++;
    }
    int count,co=0;
    for(i=0;i<c;i++)
    {
        count=0;
        for(j=0;j<c;j++)
        {
            if(re[i]==re[j] && i!=j)
            {
                count++;
            }
        }
        if(count!=0)
        {
            co++;
            break;
        }
    }
    if(co==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}