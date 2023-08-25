#include<stdio.h>

int main()
{
    int c=0;
    char s[100], x;
    int temp;

    gets(s);

    int l = strlen(s);
    for(int i=0; i<l; i++)
    {
        if(s[i] == '/' && s[i+1] == '/')
        {
            temp=i;
        }
    }

   for(int j=0; j<temp; j++)
   {
       printf("%c",s[j]);
   }
}
