#include<stdio.h>
int main()
{
    int n=0,i,j;
    char s[1000];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        n++;
    }
    int c,count=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(s[i]==s[j] && i!=j)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d",i);
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
}