#include<stdio.h>

int main()
{
    char a[100];
    int f;
    gets(a);
    int l = strlen(a);

    for(int i=0; i<l; i++)
    {

        if(a[i]== 32)
        {
            for(int j=i; j<l; j++)
            {
                a[j] = a[j+1];
            }
            i--;
        }

    }

    printf("%s",a);

}
