//WAP to Calculate difficulty of a given sentence.Word is considered hard if it has 4 consecutive consonants or number of consonants
// are more than number of vowels. Else word is easy. Difficulty= 5x Hard words + 3 x easy words
#include<stdbool.h>
#include<stdio.h>
 static int sum=0;
void sent(char a[])
{   int i=0;
    printf("askiiiii\n");
    char wd[20];
    while(a[i]!='\0')
    {
    printf("\n%c",a[i]);
    ++i;


    }
    i=0;

    while(a[i]!='\0')
    {   strcpy(wd,' ');
        int k=0;


    printf("atttttttt\n");
     while(a[i]!=' ')
        {
            strcpy(wd[k],a[i]);
            ++i;
            ++k;

    printf("aslspowdw\n");
        }
        word(wd);

    }


}


void word(char a[])
{ int i=0;
    while(a[i]!='\0')
    {
    printf("\n%c",a[i]);
    ++i;


    }
    int x=0;
    i=0;

    int c=0,v=0,streak=0;
    while(a[i]!='\0')
    {
        //printf("%c",a[i]);
        printf("LETTER CHANGE\n");
        a[i] = toupper(a[i]);
        printf("\n vowel x count is now:%d",v);
        printf("\n consonant count is now:%d",c);
        printf("\nstreak length is %d",streak);
        if (a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
                    {
                    streak=0;
                    v++;
                    printf("\n after counting vowel count is now:%d",v);
                    }
        else if (a[i]>64 && a[i]<90 )
              {
                  c++;
                  printf("\n after counting consonant count is now:%d",c);

                  streak++;
                  printf("\n after counting streak length is %d",streak);
              }

        i++;
        if(streak>4)
        {
            x=1;
        }

        }
        printf("vowels:%d consonants:%d streak:%d",v,c,streak);
        if (c>v ||x==1)
        {
            printf("it is difficult");
            sum+=5;
            }
        else
        {
            printf("it is easy");
            sum+=3;
        }

}
int main()
{
    char a[100];

    printf("enter the required sentence\n ");
    gets(a);
    sent(a);
    printf("the dificulty is %d ", sum);

}
