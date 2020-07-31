#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef struct  tooldata
{
    char toolName[30];
    int toolNum;
    int quantity;
    double cost;
}tooldata;

static char FILENAME[]="tools.dat";


void  createfile()
{
    fstream testfileexists;
    testfileexists.open(FILENAME, ios::in);

    if(!testfileexists)
    {
        testfileexists.close();
        testfileexists.open(FILENAME, ios::out | ios::binary);
        tooldata temp;
        strcpy(temp.toolName,"");
        temp.toolNum=0;
        temp.quantity=0;
        temp.cost=0.0;

        for(int i=0;i<100;i++)
            {
                testfileexists.write((char*)&temp, sizeof(temp));
            }

            testfileexists.close();

            cout<<"created";
    }
    else

        {
            testfileexists.close();
            cout<<"already exists";
        }

}


void outputline(ostream &output , tooldata &temp)
{
    output<<setiosflags(ios::left)<<setw(6)<<temp.toolNum<<setw(20)<<temp.toolName<<setw(11)<<temp.quantity<<setiosflags(ios::fixed| ios::showpoint|ios::right)<<setw(10)<<setprecision(2)<<temp.cost<<endl;

}

void textfile(fstream &readfromfile)
{
    ofstream outprintfile;
    outprintfile.open("print.txt");

    if(!outprintfile)
    {
        cout<<"cannot open file to copy data\n";
        exit(1);
    }

   cout<<setiosflags(ios::left)<<setw(6)<<"ToolNum"<<setw(20)<<"ToolName"<<setw(11)<<"Quantity"<<setiosflags(ios::fixed| ios::showpoint|ios::right)<<setw(10)<<setprecision(2)<<"Cost"<<endl;

   outprintfile<<setiosflags(ios::left)<<setw(6)<<"ToolNum"<<setw(20)<<"ToolName"<<setw(11)<<"Quantity"<<setiosflags(ios::fixed| ios::showpoint|ios::right)<<setw(10)<<setprecision(2)<<"Cost"<<endl;

   readfromfile.seekg(0,ios::beg);

    tooldata temp;
    while(!readfromfile.eof())
{
    readfromfile.read((char*)&temp, sizeof(temp));
    if(temp.toolNum!=0)
    {
        outputline(outprintfile,temp);
        outputline(cout,temp);
        cout<<"hi"<<endl<<"high"<<endl;
    }
}
outprintfile.close();
}

int main()
{

        cout << "No exception " << endl;
        return 0;
}


