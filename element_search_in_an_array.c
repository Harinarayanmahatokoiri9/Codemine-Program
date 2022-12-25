#include<stdio.h>
int main()
{
    int s,i,a,f=0;
    scanf("%d",&s);
    int arr[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<s;i++)
    {
        if(a==arr[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}