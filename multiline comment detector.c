#include<stdio.h>

int main()
{
    int a=0,l,i,j;
    char s[100];

    gets(s);
    l= strlen(s);

    for(i=0; i<l; i++)
    {
        if(s[i]=='/'&& s[i+1]=='*')
        {
            for(j=i; j<l; j++)
            {
                if(s[j]=='*' && s[j+1]=='/')
                {
                    a++;
                }
            }
        }
    }
    if(a==0)
    {
        printf("No comments found\n");
    }
    else
    {
        printf("Multiline comments found\n\n");
    }

}

