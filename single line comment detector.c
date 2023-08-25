#include<stdio.h>

int main()
{
    int i, j, c=0;
    char s[100], x;

    gets(s);

    int l = strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]=='/' && s[i] == '/')
        {
            c++;
        }

    }
    if(c==0)
    {
        printf("No single line comment found\n");
    }
    else
    {
        printf("Single line comment found\n");
    }

}
