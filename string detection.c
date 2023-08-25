#include<stdio.h>

int main()
{
    int i, j, l, temp1, temp2, f=0;
    char s[100];

    gets(s);
    l= strlen(s);

    for(i=0; i<l; i++)
    {
        if(s[i]=='"' || s[i]=='\'')
        {
            for(j=i+1; j<l; j++)
            {
                if(s[j]=='"' || s[j]=='\'')
                {
                    if(j==i+1)
                    {
                        f=0;
                    }
                    else
                    {
                        f++;
                        temp1=i+1;
                        temp2=j;
                        printf("string - ");
                    }
                }
            }
        }
    }

    if(f!=0)
    {
        for(i=temp1; i<temp2; i++)
        {
            printf("%c",s[i]);
        }
    }
    else
    {
        printf("NO String found !\n");
    }
}

