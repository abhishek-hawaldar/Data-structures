#include<stdio.h>
void getdata( int a[],int n)
{
    printf("enter the values in array");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void showdata(int a[],int n)
{
for (int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

void shift(int a[], int n, int d)
{
    while(d>0)
    {   int  temp=a[0];
        for (int i=1;i<n;i++)
        {
        a[i-1]=a[i];
        }
        a[n-1]=temp;
        d--;
    }
}
int main()
{

int n,d,a[1000000];
printf("enter the size of array");
scanf("%d",&n);
getdata(a,n);
showdata(a,n);
printf("\nenter the number of left shifts:");
scanf("%d",&d);
shift(a,n,d);
showdata(a,n);


}
