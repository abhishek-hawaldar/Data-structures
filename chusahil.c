
#include<stdbool.h>
#include<stdio.h>

static int count=0;

void find(char a[], char word[])
{
    int i=0;
    while(a[i]!='\0')
    {
        while(a[i]!=word[0]&& a[i]!='\0')
        { printf("1\n");
            i++;
        }
        if (a[i]=='\0')
        {   printf("2\n");
            break;
        }
        int k=i,j=0;
    while(a[i]==word[j] &&  a[i]!='\0' && word[j]!='\0' )
    {   printf("3\n");
        i++;
        j++;
    }
    if (word[j]=='\0')
    {   printf("4");
        count++;
        }

    else if(a[i]=='\0')
    {   printf("5\n");
        break;
    }
    else
            printf("6\n");
            i=k+1;

    }
}

/*int cnt(char a[])
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
            { //  printf("hyuiop\n");
                i++;
                words++;
            }
        else
        {   //printf("elseeeeep\n");
        i++;
        }
    }
    return words+1;
}*/

int main()
{
    int n;
    char a[1000];
    printf("enter the required sentence:\n");
    gets(a);
    printf("enter number of words\n");
    scanf("%d",&n);

    char word[n][20];

    printf("enter the words:");
    for (int j=0;j<n;j++)
    {
        scanf("%s",word[j]);
    }



    for (int j=0;j<n;j++)
    {

        find(a,word[j]);
        printf("%d",count);
    }


	printf("NUMBER OF WORDS ARE:%d",count);

	return 0;
}

/*
OUTPUT:
enter the required sentence:
my students are amazing
difficulty is :18

*/
