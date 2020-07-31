//friend function

#include<iostream>

using namespace std;
class demo
{

public:
     int arr[5];
    void putdata()

    { cout<<"enter the elements\n";
        for (int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
    }

    friend float mean(demo&);

};

float mean(demo &x)
{
    int sum=0;

        for (int i=0;i<5;i++)
        {
            sum+=x.arr[i];
        }
        return (sum/5);
}

int main()
{
    demo a;
    a.putdata();

    cout<<"mean is:"<<mean(a);
}

/*

OUTPUT:

enter the elements
1
2
3
4
5
mean is:3
*/
