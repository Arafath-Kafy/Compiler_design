#include<stdio.h>

int main()
{
    char s[100], x;

    gets(s);

    int l = strlen(s);
    for(int i=0; i<l; i++)
    {
        if(s[i] == ' '&& s[i+1]==' ')
        {
            for(int j=i; j<l; j++)
            {
                s[j]=s[j+1];
            }
            i--;

        }

    }
    printf("%s",s);
}

