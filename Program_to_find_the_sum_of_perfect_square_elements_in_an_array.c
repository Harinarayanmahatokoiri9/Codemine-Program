#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,b,sum=0;
    float c;
    for(i=0;i<n;i++)
    {
        a=arr[i];
        c=sqrt(a);
        b=c;
        if(b==c)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}