
#include<stdbool.h>
#include<stdio.h>
#include<string.h>

int cnt(char a[])
{   int words=0;
    int i=0;
    while(a[i]!='\0')
    {
        if (a[i]==' ' || a[i]==',' || a[i]==';'|| a[i]=='.')
            {
                if (a[i+1]==' '||a[i+1]==',')
                {
                    i++;
                }
                    else
               {
                i++;
                words++;
               }
               }
        else
        {
        i++;
        }
    }
    return words+1;
}
int main()
{
    char a[100];


    gets(a);
    printf("%d",cnt(a));
    return 0;
}


