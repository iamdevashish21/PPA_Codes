#include<iostream>

using namespace std;

class base{


    public:
    int i,j;
        void fun()
        {
            cout<<"Inside Base Fun\n";//defination
        }
};


class derived : public base
{
    public:
    int x,y;
        void fun() //redefination
        {
            cout<<"Inside derived Fun\n";

        }
};

int main()
{
    base bobj;
    derived dobj;


    base *bptr=NULL;
    derived *dptr=NULL;

    bptr =&bobj; //nocasting and its allowed  both are 8byte
    dptr =&dobj; //nocasting and its allowed  both are 16byte


    bptr =&dobj; // upcasting low to high
    dptr =&bobj; //downcasting hogh to low

    return 0;
}