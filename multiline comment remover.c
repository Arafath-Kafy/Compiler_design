#include<stdio.h>

int main()
{
    int a=0,l,i,j;
    char s[100];
    int temp1, temp2;

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
                    temp1=i;
                    temp2=j+2;
                }
            }
        }
    }

    if(a!=0)
    {
        for(int x=0; x<temp1; x++)
        {
            printf("%c",s[x]);
        }
        for(int x=temp2; x<l; x++)
        {
            printf("%c",s[x]);
        }
    }
    else if(a==0)
    {
        printf("%s",s);
    }


}
