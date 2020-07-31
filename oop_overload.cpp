
#include<iostream>
#include<cstring>
using namespace std;

class demo
{
     int a;
     float b;

 public:
     void show()
     {
         cout<<"nothing is passed\n";
     }

     void show(int a)
     {
         cout<<"\nvalue is:"<<a;
     }
     void show(int a, float b)
     {
         cout<<"\nvalues are :"<<a<<"\tand "<<b;
     }

};

int main()
{
    demo x, y,z;
    x.show();
    y.show(1);
    z.show(2,9.8);

}
/*
OUTPUT:
nothing is passed

value is:1
values are :2   and 9.8
Process returned 0 (0x0)   execution time : 0.371 s
Press any key to continue.
*/
