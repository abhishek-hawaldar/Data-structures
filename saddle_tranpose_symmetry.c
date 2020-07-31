#include<stdio.h>


int main()
{

 int m1,m2,n1,n2,k;
 int a[10][10],b[10][10];
 //get array
printf("enter the dimensions of matrix");
scanf("%d %d",&m1,&m2);
printf("enter the elements of matrix");
for (int i=0;i<m1;i++)
{
    for(int j=0;j<m2;j++)
    {
        scanf("%d",&a[i][j]);
    }

}
// display

    for (int i=0;i<m1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            printf(" %d",a[i][j]);
        }
    printf("\n");

    }
printf("enter the dimensions of matrix");
scanf("%d %d",&n1,&n2);
printf("enter the elements of matrix");
for (int i=0;i<n1;i++)
{
    for(int j=0;j<n2;j++)
    {
        scanf("%d",&b[i][j]);
    }

}
// display

    for (int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf(" %d",b[i][j]);
        }
    printf("\n");

    }

// addition
int c[m1][m2];
if (m1==n1 &&n1==n2)
{

    for (int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];

        }
}

printf("addition is:\n");
    for (int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf(" %d",c[i][j]);
        }
    printf("\n");

    }
}
else printf("addition not possible");
//multiplication

int x[m1][n2];
if(m2==n1)
{
for (int i=0;i<m1;i++)
{
    for(int j=0;j<n2;j++)
    {
        x[i][j]=0;
        for(int k=0;k<m2;k++)
        {
            x[i][j]+=a[i][k]*b[k][j];
        }
    }
}

printf("product  is:\n");
    for (int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf(" %d",x[i][j]);
        }
    printf("\n");

    }
}
else printf("multiplication not possible ");
}
