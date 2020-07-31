#include<stdio.h>
#include<string.h>

struct poly
{
    int deg;
    int coef[10];

};


struct poly getd(struct poly x)
{
    printf("ENTER THE DEGREE OF THE POLYNOMIAL:");
    scanf("%d",&x.deg);
    printf("\n THE DEGREE IS :%d",x.deg);
    printf("\nENTER THE COEFICIENTS FROM THE CONSTANT TO HIGHER DEGREES :\n ");
    for (int i=0;i<=x.deg;i++)
    {
        scanf("%d",&x.coef[i]);
    }

    return x;
}


struct poly showd(struct poly x)
{

    for (int i=x.deg;i>=0;i--)
    {
        printf("%d",x.coef[i]);

        printf("x^%d",i);
        if(i!=0)
        printf(" + ");
    }
    return x;
}


struct poly add(struct poly p1, struct poly p2,struct poly p3)
{
    if (p1.deg>p2.deg)
    {
        p3.deg=p1.deg;
        int i=p3.deg;
        while(i!=p2.deg)
        {
            p3.coef[i]=p1.coef[i];
            --i;
        }
        while(i>=0)
        {
        p3.coef[i]= p1.coef[i]+ p2.coef[i];
        --i;
        }
    }
    else
    {
        p3.deg=p2.deg;

        int i=p3.deg;
        while(i!=p1.deg)
        {
        p3.coef[i]=p2.coef[i];
        --i;
        }
        while(i>=0)
        {
        p3.coef[i]= p2.coef[i]+ p1.coef[i];
         --i;
        }

    }
return p3;
}
int main()
{
    struct poly p1,p2,p3;

    p1=getd(p1);

    printf("\nPOLYNOMIAL NUMBER 1 IS:");
    showd(p1);
    printf("\n");
    p2=getd(p2);
    printf("\n POLYNOMIAL NUMBER 2 IS:");
    showd(p2);

    printf("\n");

    p3=add(p1,p2,p3);
    printf("\n");
    printf("THE SUM OF THE POLYNOMIALS IS :");
    showd(p3);
}
/*
OUTPUT:
ENTER THE DEGREE OF THE POLYNOMIAL:3

 THE DEGREE IS :3
ENTER THE COEFICIENTS FROM THE CONSTANT TO HIGHER DEGREES :
 1
2
3
4

POLYNOMIAL NUMBER 1 IS:4x^3 + 3x^2 + 2x^1 + 1x^0
ENTER THE DEGREE OF THE POLYNOMIAL:6

 THE DEGREE IS :6
ENTER THE COEFICIENTS FROM THE CONSTANT TO HIGHER DEGREES :
 1
2
3
4
5
6
7

 POLYNOMIAL NUMBER 2 IS:7x^6 + 6x^5 + 5x^4 + 4x^3 + 3x^2 + 2x^1 + 1x^0

THE SUM OF THE POLYNOMIALS IS :7x^6 + 6x^5 + 5x^4 + 8x^3 + 6x^2 + 4x^1 + 2x^0
Process returned 0 (0x0)   execution time : 23.605 s
Press any key to continue.*/
