#include<iostream>
using namespace std;

void spair(int a[], int x,int n)
{
     int b[1000],j=0;
for (int i=0;i<n;i++)
{
    if (a[i]<=x)
    {
        b[j]=a[i];
        j++;
    }
}


for (int k=0;k<j;k++)
 {
      for(int m=k+1;m<j;m++)
 {
     if((b[k]+b[m])==x)
        {
            cout<<b[k]<<"+"<<b[m]<<"\n";
        }
 }
 }

}

int main()
{

int a[1000],n,x;
cout<<"enter the size of array: ";
cin>>n;
cout<<"\nenter the elements:\n";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"\n enter the element which should be the sum of pair:\n";
cin>>x;
spair(a,x,n);


}
