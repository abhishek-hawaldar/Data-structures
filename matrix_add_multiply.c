#include<stdio.h>


int main()
{
int n,a[10];
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements of array");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}


for(int i=0;i<n;i++)
{
    printf("%d",a[i]);
}


for(int i=1;i<n;i++)
{
    if(a[i]-a[i-1]>1)
    {
        printf("\n missing element is %d",a[i-1]+1);
        break;
    }
}
}
