
#include<iostream>
#include<cstring>

using namespace std;

 class demo
 {
 int roll;
 char  * name;


 public:


 demo()
 {
 roll=0;
 name= new char[2];
 }

 demo(int x, char *n)
{
name= new char[2];

roll=x;
strcpy(name,n);
}



void getdata()
{
cout<<"\nenter name and roll no";
cin>>name>>roll;
}
void display()
{
cout<<"\n name ="<<name<<"\n roll no="<<roll;
}

 ~demo()
 {
 delete name;
 }
 };


 int main()
 {
 char *n= new char[2];
 cout<<"enter name ";
 cin>>n;
 demo d1(12,n);
d1.display();

demo d;
d.getdata();
d.display();



 return(0);
 }
