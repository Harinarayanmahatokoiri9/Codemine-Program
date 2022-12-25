#include<stdio.h>
int main()
{
    char s[10000];
    int i,c=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
    
}