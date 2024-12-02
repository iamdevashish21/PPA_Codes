#include<iostream>
using namespace std;

class marvellous {

    public:
    int No1;
    int No2;

    marvellous()
    {
        cout<<"Inside default Constructor\n";
        No1=0;
        No2=0;
    }

    marvellous(int a,int b)
    {
        cout<<"Inside parametrised Constructor\n";
        No1=0;
        No2=0;
    }

    ~marvellous()
    {
        cout<<"Inside destructor\n";
    }

    void fun()
    {
        cout<<"Inside fun \n";
    }

};

int main()
{

    marvellous mobj1;
     marvellous mobj2(11,21);


    return 0;
}