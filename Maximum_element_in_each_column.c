#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max;
    for(j=0;j<b;j++)
    {
        max=0;
        for(i=0;i<a;i++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
        printf("%d
",max);
    }
}