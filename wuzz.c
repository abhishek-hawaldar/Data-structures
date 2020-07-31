


//  SEARCHING ALGORITHMS


#include<stdio.h>


int min(int a, int b)
{
    if(a>b)
        return b;
    else return a;
}


int fibosearch(int a[], int n)
{    int x;
    printf("\nENTER THE ELEMENT TO FIND:");
    scanf("%d",&x);
    int fib2 = 0;   // (m-2)'th Fibonacci No.
    int fib1 = 1;   // (m-1)'th Fibonacci No.
    int fibM = fib2 + fib1;  // m'th Fibonacci
    while (fibM < n)
    {
        fib2 = fib1;
        fib1 = fibM;
        fibM  = fib2 + fib1;
    }

    int offset = -1;
  while (fibM > 1)
    {

        int i = min(offset+fib2, n-1);

        if (a[i] < x)
        {
            fibM  = fib1;
            fib1 = fib2;
            fib2 = fibM - fib1;
            offset = i;
        }


        else if (a[i] > x)
        {
            fibM  = fib2;
            fib1 = fib1 - fib2;
            fib2 = fibM - fib1;
        }

        else return i;
    }


    if(fib1 && a[offset+1]==x)return offset+1;


    return -1;
}
//---------------------------------------------------------------------------------------------------------

int fibsearch(int a[], int n)
 {
     int fibM, fib1, fib2;
     int i;
int x;
    printf("\nENTER THE ELEMENT TO FIND:");
    scanf("%d",&x);
     fib1=1;
     fib2=0;
     fibM=fib1+fib2;

     while(fibM<n)
     {  fib2=fib1;
        fib1=fibM;
        fibM=fib2+fib1;
    }

    int offset=-1;

    while(fibM>1)
    {
        i=min(offset+fib2, n-1);

        if(a[i]<x)
        {
            fibM=fib1;
            fib1=fib2;
            fib2=fibM-fib1;
            offset=i;
                    }
        else if (a[i]>x)
        {
            fib1=fib1-fib2;
            fibM=fib2;
            fib2=fibM-fib1;
        }
        else
            return i;
    }
    if(fib1&&a[offset+1]==x) return i+1;


        return -1;

    }





int main()
{
    int n;
 printf("enter the length of array:");
 scanf("%d",&n);
 int a[n];
 printf("ENTER THE ELEMENTS:");
 for(int i=0;i<n;i++)
 {
     scanf("%d",&a[i]);

 }
 printf("THE ARRAY IS:");
 for(int i=0;i<n;i++)
 {

     printf(" %d",a[i]);

 }


 //SEARCHING THE ARRAY:




printf("\nFIBONACCI SEARCH:\n");
 int z=fibsearch(a,n);
 if(z!=-1)
    {
         printf("FOUND AT LOCATION:%d",z+1);

    }
 else { printf("NOT FOUND");}

}
/*
OUTPUT:
enter the length of array:10
ENTER THE ELEMENTS:1
2
3
4
5
6
7
8
9
10
THE ARRAY IS: 1 2 3 4 5 6 7 8 9 10
LINEAR SEARCH:

ENTER THE ELEMENT TO FIND:3
FOUND AT LOCATION:3
BINARY SEARCH:

ENTER THE ELEMENT TO FIND:8
location is 8
TERNARY SEARCH:

ENTER THE ELEMENT TO FIND:6
FOUND AT LOCATION:6
FIBONACCI SEARCH:

ENTER THE ELEMENT TO FIND:12
NOT FOUND
Process returned 0 (0x0)   execution time : 28.036 s
Press any key to continue.






*/

