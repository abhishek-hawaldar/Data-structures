#include<stdio.h>

void main()
{

int a[10],n,x,y;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements\n");
for (int j=0;j<n;j++)
{
scanf("%d",&a[j]);
}
//deleting an element

printf("enter position to be deleted \n");
scanf("%d",&x);

for (int i=x-1;i<n-1;i++)
{
 a[i]=a[i+1];
}


for (int j=0;j<n-1;j++)
{
printf("%d",a[j]);
}

// inserting an element
printf("enter the element to be inserted\n");
scanf("%d",&x);
printf("enter the position\n");
scanf("%d",&y);
for(int i=n-1;i>y-1;i--)
{
  a[i]=a[i-1];
}
a[y-1]=x;
for (int j=0;j<n;j++)
{
printf("%d",a[j]);
}
printf("\n");
// reversing an array

for (int i=0,j=n-1;i<j;i++,j--)
{
int temp;

temp=a[i];
a[i]=a[j] ;
a[j]=temp;
}


for (int j=0;j<n;j++)
{
printf("%d",a[j]);
}


}

/*
OUTPUT:
enter the number of elements
5
enter the elements
1
2
3
4
5
enter position to be deleted
3
1245enter the element to be inserted
8
enter the position
3
12845
54821


*/
