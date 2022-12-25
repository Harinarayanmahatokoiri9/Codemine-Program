#include<stdio.h>
#include<math.h>
int main()
{
    int num,a;
    float x;
    scanf("%d",&num);
    x=sqrt((double)num);
    a=x;
    if(a==x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}