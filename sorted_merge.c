#include<stdio.h>


void accept(int x[])
{
printf("enter elements of the array ");
for (int i=0;i<5;i++)
{
    scanf("%d",&x[i]);
}

}
void display(int x[],int n)
{
    printf("\n one of the arrays is ");
    {
        for (int i=0;i<n;i++)
        {
            printf("%d ",x[i]);
        }
    }

}
void sort(int a[] )
{
    for (int i=0;i<5;i++)
    {
        for (int j=i;j<5;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void insert(int a[],int x,int y)
{
    for(int i=9;i>y;i--)
{
  a[i]=a[i-1];
}
a[y]=x;

}

void merge(int a[], int b[])
{

        for(int j=0;j<5;j++)
        {
            for (int k=0;k<10;k++)
             {
                if (a[k]<b[j] && b[j]<=a[k+1])

                    {
                        insert(a,b[j],k+1);
                         break;
                    }

            }
        }

}


int main()
{
int a[10], b[10];
accept(a);
accept(b);
display(a,5);
display(b,5);
sort(a);
sort(b);
display(a,5);
display(b,5);
merge(a,b);
display(a,10);
}
/*
OUTPUT:
enter elements of the array 1
3
5
9
7
enter elements of the array 2
8
4
6
9

 one of the arrays is 1 3 5 9 7
 one of the arrays is 2 8 4 6 9
 one of the arrays is 1 3 5 7 9
 one of the arrays is 2 4 6 8 9
 one of the arrays is 1 2 3 4 5 6 7 8 9 9*/
