/*wap to implement class book in which details are as follows

     private book_id bookname author price
     pub getdetails print details
     get details of some books from user and print in tabular form
      also find total price of all books
EXTEND USING DYNAMIC MEMORY ALLOCTION

     */
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class book
{
    protected:
    float book_id,price;
    char name[30],author[20];
public:
   static float total;
    void getdata()
    {
        cout<<"enter book id";
        cin>>book_id;
        cout<<"enter book price";
        cin>>price;
        cin.ignore();
        cout<<"enter book name";
        cin.getline(name,20);
        cout<<"enter name of author";
        cin.getline(author,30);

     total+=price;
    }
};

class stock : public book
{
    int stock;
public:
    void get_stock()
    {
        cout<<"ENTER THE STOCK AVAILABLE: ";
        cin>>stock;
    }


    void putdata()
    {
        cout<<left<<setw(12)<<book_id<<left<<setw(12)<<name<<left<<setw(12)<<author<<left<<setw(12)<<price<<left<<setw(12)
        <<stock<<"\n";
    }
};

float book:: total;
int main()
{  int n;
     cout<<"enter the number of books(objects): ";
     cin>>n;
     stock *s;
     s= new stock[n];
    //stock a,b,c,d;

  for(int i=0;i<n;i++)
  {
      s[i].getdata();
      s[i].get_stock();
    }
    /*b.getdata();
    b.get_stock();
    c.getdata();
    c.get_stock();
    d.getdata();
    d.get_stock();
*/
    cout<<"\n"<<left<<setw(12)<<"book_id"<<left<<setw(12)<<"name"<<left<<setw(12)<<"author"<<left<<setw(12)<<"price"<<left<<setw(12)<<"stock";
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
      s[i].putdata();
    }
    /*b.putdata();
    c.putdata();
    d.putdata();
    */
    //cout<<"\ntotal price is:  "<<book::total;
    delete s;
}


/*
OUTPUT:
enter the number of books(objects): 3
enter book id1
enter book price234
enter book nameoops
enter name of authorbalguru
ENTER THE STOCK AVAILABLE: 34
enter book id2
enter book price123
enter book namedeld
enter name of authorhawkin
ENTER THE STOCK AVAILABLE: 23
enter book id3
enter book price234
enter book namecolop
enter name of authorbarray
ENTER THE STOCK AVAILABLE: 23

book_id     name        author      price       stock
1           oops        balguru     234         34
2           deld        hawkin      123         23
3           colop       barray      234         23


*/
