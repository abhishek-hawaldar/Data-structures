#include<stdio.h>

void multiply( int a[][n], int b[][q] ,int m,int n,int p, int q)
{

 int c[m][q]=0;
 if (n==p)
 {
    for(int i=0;i<m;i++)
    {
     for (int j=0;j<q;j++)
     {
      c[i][j]=0;
      for(int k=0;k<n;k++)
      {
          c[i][j]=a[i][k]*b[k][j]+ c[i][j];
      }

     }
    }
     for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d ", *(*(c + i) + j));
        }
        printf("\n");
    }

 }
 else
    printf("cannot multiply");
}
/*void display(int c[2][2],int m, int q)
{
    for(int i=0;i<m;i++)
    {
     for (int j=0;j<q;j++)
     {
         printf(c[i][j]);
     }
     printf("/n");
    }
}
int main()
{
int a[2][2]={{1, 2},{1,2} },b[2][2]={{1,1},{2,2}},c[2][2],m=2,n=2,p=2,q=2;
//getarr(a);
//getarr(b);
display(a,m,n);
display(b,p,q);
//multiply(a,b,c,m,n,p,q);
//display(c,m,q);
}
*/
int main()
{
    int mat1[][2] = { { 2, 4 }, { 3, 4 } };
    int mat2[][2] = { { 1, 2 }, { 1, 3 } };
    int m= 2, n = 2, p = 2, q = 2;
    multiply( mat1,mat2,m,n,p,q );
    return 0;
}
