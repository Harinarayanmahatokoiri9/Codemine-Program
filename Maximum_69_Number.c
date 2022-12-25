#include<stdio.h>
int main()
{
    int n,r,i=0;
    scanf("%d",&n);
    int x=n,count=0;
    while(x)
    {
        count++;
        r=x%10;
        x=x/10;
    }
    int arr[count];
    while(n)
    {
        r=n%10;
        arr[i]=r;
        i++;
        n=n/10;
    }
    for(i=count-1;i>=0;i--)
    {
        if(arr[i]==6)
        {
            arr[i]=9;
            break;
        }
    }
    for(i=count-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}