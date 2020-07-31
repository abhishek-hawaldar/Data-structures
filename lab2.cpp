// student class with name,roll no, grades , marks of 5 subjects percentage

#include<iostream>
#include<cstring>
using namespace std;

class student
{
  int roll,m1,m2,m3,m4,m5;
  float per;
  char *name, grade[5], merit[20];

  public:


  student()
  {
      roll=0;
      name= new char[2];
      m1=0;
      m3=0;
      m4=0;
      m5=0;
      m2=0;

  }

  student(int r,const char *n,int n1, int n2 ,int n3 ,int n4, int n5)
  {
       name= new char[2];
      roll=r;
      strcpy(name,n);
      m1=n1;
      m3=n3;
      m4=n4;
      m5=n5;
      m2=n2;

  }

  void getdata()
  {
      cout<<"\nenter roll no";
      cin>>roll;
      cout<<"\nenter name";
      cin>>name;
      cout<<"\nenter marks";
      cin>>m1>>m2>>m3>>m4>>m5;

  }
  void calc_per()
  {
      per=(m1+m2+m3+m4+m5)/5;

  }
  void calc_grade()
  {
  if (per>90)
    strcpy(grade,"A+");
  else if (per>80)
    strcpy(grade,"A");
  if (per>70)
    strcpy(grade,"B+");
  if (per>60)
    strcpy(grade,"B");
  if (per>50)
    strcpy(grade,"C");
  else
    strcpy(grade,"F");

  }

  void calc_merit()
  {
  if (per>65)
    strcpy(merit,"Distinction");
  else if (per>55)
    strcpy(merit,"First class");
  if (per>50)
    strcpy(merit,"Second class");
  else
    strcpy(merit,"Fail");
  }

   void display()
   {
       cout<<"roll no="<<roll<<"\nname="<<name<<"\npercentage="<<per<<"\ngrade="<<grade<<"\nclass="<<merit;
   }

  ~student()
  {
   delete merit,per,grade;
  }


};

int main()
{
   cout<<"welcome\n";
   /*  char *n= new char[2];
 cout<<"enter name ";
 cin>>n;*/
    student s1(12,"abhishek ",90,90,85,85,90);

    s1.calc_per();
    s1.calc_merit();
    s1.calc_grade();
    s1.display();



    student s2;
    s2.getdata();
    s2.calc_per();
    s2.calc_merit();
    s2.calc_grade();
    s2.display();


return(0);
}

/*
welcome
roll no=12
name=abhishek
percentage=88
grade=C
class=Second class
enter roll no14

enter name raj

enter marks50
60
69
76
100
roll no=14
name=raj
percentage=71
grade=C
class=Second class
Process returned 0 (0x0)   execution time : 27.867 s
Press any key to continue.
*/
