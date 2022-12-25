#include<stdio.h>
int main()
{
    int l=0,i;
    char str[1000];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        l++;
    }
    for(i=l-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}