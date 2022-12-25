#include<stdio.h>
#include<math.h>
int palindrome(int n)
{
    int a=n;
    int r,rev=0;
    while(n)
    {
        r=n%10;
        n/=10;
        rev=rev*10+r;
    }
    if(rev==a)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=n;
    b=n;
    while(1)
    {
        a++;
        if(palindrome(a))
        {
            break;
        }
    }
    while(1)
    {
        b--;
        if(palindrome(b))
        {
            break;
        }
    }
    if(abs(n-a)<abs(n-b))
    {
        printf("%d",a);
    }
    else if(abs(n-b)<abs(n-a))
    {
        printf("%d",b);
    }
    else
    {
        printf("%d %d",b,a);
    }
}