#include<stdio.h>
#include<string.h>
struct stud
{
    int roll;
    int age;
    int perc;
    char dept[20];
    struct
    {
    char first[20];
    char last[20];
    }name;



int main()
{
struct stud s[10], as[10], ds[10], temp;

    int f;
int x,k=1;
int sum=0;
int avg=0;
int max=0;

static int c=0;
while(k!=0)
{
printf("enter the operation you want to perform: \n1:ADD RECORD\n2:DELETE RECORD\n3:VIEW RECORD\n4:EDIT RECORD\n5:DISPLAY DATABASE\n6:AVERAGE AND HIGHEST PERCENTAGE\n7:DISPLAY ACCORDING TO MARKS\n");
scanf("%d",&x);
switch(x)
{
    case 1:

    { int i=c;
        c++;
        printf("enter  details of student number %d",c);
        printf(": \n roll no:\n age:\n percentage:\n department:\n first name:\n last name:\n");
        scanf(" %d %d %d%s%s%s",&s[i].roll, &s[i].age,&s[i].perc, s[i].dept,s[i].name.first,s[i].name.last);

        break;
    }
case 2:
    {   int del;
        printf("enter the index number of student you want to delete:\n");
        scanf("%d",&del);
        for (int i=del;i<c;i++)
        {
            s[i-1]=s[i];
        }

        c= c-1;
        /*del=c;
       s[del-1].roll=0;
        s[del-1].age=0;
        s[del-1].perc=0;
        strcpy(s[del-1].dept," ");
        strcpy(s[del-1].name.first," ");
        strcpy(s[del-1].name.last," ");
        */break;
    }
case 3:
    {   int vr;
        printf("enter the index number of record you want to view\n");
        scanf("%d",&vr);
        printf("\nROLL NO:%d",s[vr-1].roll);
        printf("\nAGE:%d",s[vr-1].age);
        printf("\nPERCENTAGE:%d",s[vr-1].perc);
        printf("\nDEPARTMENT%s",s[vr-1].dept);
        printf("\nNAME :%s",s[vr-1].name.first);
        printf("  %s",s[vr-1].name.last);
        break;
    }
case 4:
    {   int edit,par;
        printf("enter the roll no you want to edit:");
        scanf("%d",&edit);
        printf("enter the parameter you want to edit\n 1.AGE\n2.PERCENTAGE\n3.DEPARTMENT\n4.NAME\n");
        scanf("%d",&par);
        switch(par)
        {
        case 1:
            printf("enter new age:");
            scanf("%d",&s[edit-1].age);
            break;

        case 2:
            printf("enter new percentage:");
            scanf("%d",&s[edit-1].perc);
            break;
        case 3:
            printf("enter new department:");
            scanf("%s",&s[edit-1].dept);
            break;
        case 4:
            printf("enter new first name:");
            scanf("%s",&s[edit-1].name.first);
            printf("enter new last name:");
            scanf("%s",&s[edit-1].name.last);
            break;
            }
            break;
        default:
            printf("enter appropriate operation");
    }
case(5):
     printf("\nROLL NO\tAGE\tPERCENTAGE\tDEPARTMENT\tNAME");
    for (int vr=1;vr<c+1;vr++)
    {
      printf("\n%d",s[vr-1].roll);
        printf("      \t%d",s[vr-1].age);
        printf(" \t%d",s[vr-1].perc);
        printf("          \t%s",s[vr-1].dept);
        printf("        \t%s",s[vr-1].name.first);
        printf(" %s",s[vr-1].name.last);
        printf("\n");

    }
    break;
case(6):
    for(int i=0;i<c;i++)
    {
        sum+=s[i].perc;
        if (s[i].perc>max)
        {
            max=s[i].perc;
        }

    }
    avg=sum/(c);
    printf("\nThe average marks are: %d",avg);
    printf("\nThe highest marks are: %d",max);
    break;
case (7):

    printf("ENTER THE ORDER YOU WANT: 1.ASCENDING 2.DESCENDING");
    scanf("%d",&f);
    switch(f)
    {
    case 1:

            for (int i=0;i<c;i++)
            {
                for (int j=i;j<c;j++)
                {
                    if (s[j].perc<s[i].perc)
                       {
                           temp=s[j];
                            s[j]=s[i];
                            s[i]=temp;
                       }
                }
            }

     printf("\nROLL NO\tAGE\tPERCENTAGE\tDEPARTMENT\tNAME");
    for (int vr=1;vr<c+1;vr++)
    {
      printf("\n%d",s[vr-1].roll);
        printf("      \t%d",s[vr-1].age);
        printf(" \t%d",s[vr-1].perc);
        printf("          \t%s",s[vr-1].dept);
        printf("        \t%s",s[vr-1].name.first);
        printf(" %s",s[vr-1].name.last);
        printf("\n");

    }
    break;
   case 2:

            for (int i=0;i<c;i++)
            {
                for (int j=i;j<c;j++)
                {
                    if (s[j].perc>s[i].perc)
                       {

                            temp=s[j];
                            s[j]=s[i];
                            s[i]=temp;
                       }
                }
            }

     printf("\nROLL NO\tAGE\tPERCENTAGE\tDEPARTMENT\tNAME");
    for (int vr=1;vr<c+1;vr++)
    {
      printf("\n%d",s[vr-1].roll);
        printf("      \t%d",s[vr-1].age);
        printf(" \t%d",s[vr-1].perc);
        printf("          \t%s",s[vr-1].dept);
        printf("        \t%s",s[vr-1].name.first);
        printf(" %s",s[vr-1].name.last);
        printf("\n");

    }


    }
    break;
}
printf("enter  1 if you want to perform another operation else print 0 ");
scanf("%d",&k);

}


return 0;

}
/*OUTPUT:
enter the operation you want to perform:
1:ADD RECORD
2:DELETE RECORD
3:VIEW RECORD
4:EDIT RECORD
5:DISPLAY DATABASE
1
enter  details of student number 1:
 roll no:
 age:
 percentage:
 department:
 first name:
 last name:
1
23
23
CS
ABHI
SHEK
enter  1 if you want to perform another operation else print 0 1
enter the operation you want to perform:
1:ADD RECORD
2:DELETE RECORD
3:VIEW RECORD
4:EDIT RECORD
5:DISPLAY DATABASE
1
enter  details of student number 2:
 roll no:
 age:
 percentage:
 department:
 first name:
 last name:
2
67
89
CS
SERDT
HUIP
enter  1 if you want to perform another operation else print 0 1
enter the operation you want to perform:
1:ADD RECORD
2:DELETE RECORD
3:VIEW RECORD
4:EDIT RECORD
5:DISPLAY DATABASE
1
enter  details of student number 3:
 roll no:
 age:
 percentage:
 department:
 first name:
 last name:
3
99
99
CS
TERT
YUIOP
enter  1 if you want to perform another operation else print 0 1
enter the operation you want to perform:
1:ADD RECORD
2:DELETE RECORD
3:VIEW RECORD
4:EDIT RECORD
5:DISPLAY DATABASE
5

ROLL NO AGE     PERCENTAGE      DEPARTMENT      NAME
1       23      23              CS              ABHI SHEK

2       67      89              CS              SERDT HUIP

3       99      99              CS              TERT YUIOP
enter  1 if you want to perform another operation else print 0 1
enter the operation you want to perform:
1:ADD RECORD
2:DELETE RECORD
3:VIEW RECORD
4:EDIT RECORD
5:DISPLAY DATABASE
2
enter the index number of student you want to delete:
2
enter  1 if you want to perform another operation else print 0 1
enter the operation you want to perform:
1:ADD RECORD
2:DELETE RECORD
3:VIEW RECORD
4:EDIT RECORD
5:DISPLAY DATABASE
5

ROLL NO AGE     PERCENTAGE      DEPARTMENT      NAME
1       23      23              CS              ABHI SHEK

3       99      99              CS              TERT YUIOP
enter  1 if you want to perform another operation else print 0 0

*/
