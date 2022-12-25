#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else if(b>a)
        {
            b-=a;
        }
    }
    printf("%d",a);
}