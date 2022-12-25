#include<stdio.h>
int main()
{
    int a,i=0,b=1,c,j;
    scanf("%d",&a);
    for(j=1;j<=a;j++)
    {
        c=i+b;
        i=b;
        b=c;
        if(c==a)
        {
            printf("True");
            break;
        }
        else if(c>a)
        {
            printf("False");
            break;
        }
    }
}