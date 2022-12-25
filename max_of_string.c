#include<stdio.h>
int main()
{
    int n=0,i;
    char str[1000],max='a';
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        n++;
    }
    for(i=0;i<n;i++)
    {
        if(max<str[i])
        {
            max=str[i];
        }
    }
    printf("%c",max);
}