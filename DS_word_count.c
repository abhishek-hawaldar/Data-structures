
#include<stdbool.h>
#include<stdio.h>

int cnt(char a[])
{   int words=0;
    printf("\n%d",strlen(a));
     for (int i=0;i< strlen(a);i++)
    {
        printf("\n%c",a[i]);
    }
        int i=0;
    while(i< strlen(a))
    {
        if (i<strlen(a) && a[i]==' ')
            {   printf("hyuiop\n");
                i++;
                words++;
            }
        else
        {   printf("elseeeeep\n");
        i++;
        }
    }
    return words+1;
}
int main()
{
    char a[1000];
    printf("enter the required sentence:\n");
    gets(a);
	printf("NUMBER OF WORDS ARE:%d",cnt(a));
	return 0;
}

h    	f
East or west,    CSE is the best.