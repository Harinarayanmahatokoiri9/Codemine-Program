#include<stdio.h>
int main()
{
    char str[100];
    int i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
        else
        {
            str[i]=str[i];
        }
    }
    printf("%s",str);
}