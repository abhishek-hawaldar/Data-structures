#include<stdio.h>


int main()
{
 int a[10][10],m,n,k,x=1 ;
printf("enter the dimensions of first matrix\n");
scanf("%d%d",&m,&n);
/*printf("enter the dimensions of second matrix\n");
scanf("%d%d",&p,&q);
*/
printf("enter the elements of first matrix");

for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}

for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        printf("%d",a[i][j]);
    }
printf("\n");
}

for (int i=0;i<m;i++)
{  int rowmin=a[i][0],col=0;
    for (int j=1;j<n;j++)
    {
        if (rowmin>a[i][j])
        {
            rowmin=a[i][j];
            col=j;
        }
    }
    for (k=0;k<m;k++)
    {
        if(a[k][col]>rowmin)
        {
            break;
        }

    }
    if (k==m)
    {
        printf("saddle point found is%d",rowmin);
        x=0;
    }

}
if(x)
    printf("saddle point not found");


}
