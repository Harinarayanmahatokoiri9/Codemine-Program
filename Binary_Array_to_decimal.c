#include<stdio.h>
#include<math.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k=0,s=0;
    for(i=a-1;i>=0;i--)
    {
        s+=arr[i]*pow(2,k);
        k++;
    }
    printf("%d",s);
}