#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0,i;
    for(i=0;i<n;i++)
    {
        char s[4];
        scanf("%s",s);
        if(s[0]=='+' && s[1]=='+')
        {
            count++;
        }
        else if(s[0]=='-' && s[1]=='+')
        {
            count--;
        }
        else if(s[1]=='+' && s[2]=='+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    printf("%d",count);
}