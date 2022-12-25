#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int r,sum=0;
    while(num!=0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    printf("%d",sum);
}