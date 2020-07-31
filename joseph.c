
#include <stdio.h>

int josephus(int n, int k)
{
    int i =0, cnt=n;
int a[]={1};
while(cnt>k)
{
    while (i<n)
    {
        i=i+k;
        a[k]=0;
        cnt--;
        printf("hii");
    }
    if(i>n)
        {
        i=i-n;

        printf("biiyii");
    }

}
for(int i=0;i<n;i++)
{
    if(a[i])
    {

printf("\nThe chosen place is %d",i);

    }
}

}



  /*if (n == 1)
    return 1;
  else
    /* The position returned by josephus(n - 1, k) is adjusted because the
       recursive call josephus(n - 1, k) considers the original position
       k%n + 1 as position 1 */
//    return (josephus(n - 1, k) + k-1) % n + 1;



// Driver Program to test above function
int main()
{
  int n = 14;
  int k = 2;
   josephus(n, k);
  return 0;
}
