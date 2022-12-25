#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a,b;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        printf("%d
",a+b);
    }
}