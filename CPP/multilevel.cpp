#include<iostream>
using namespace std;

class base
{
    public:
    int i,j;

    base()
    {
        cout<<"Inside Base Constructor\n";
        i=10;
        j=20;

    }

    ~base()
    {
        cout<<"Inside Base Destructor\n";
    }

    void Fun()
    {
        cout<<"Inside Fun\n";

    }

};

class derived: public base
{
    public:
    int x,y;

    derived()
    {
        cout<<"Inside Derived Constructor\n";
        x=30;
        y=40;
    }

    ~derived()
    {
        cout<<"Inside Derived Destructor\n";
    }
    void Gun()
    {
        cout<<"Inside Gun";
    }
};

class derivedx: public derived
{
    public:
    int a,b;

    derivedx()
    {
        cout<<"Inside Derived Constructor\n";
        a=30;
        b=40;
    }

    ~derivedx()
    {
        cout<<"Inside Derived Destructor\n";
    }
    void sun()
    {
        cout<<"Inside Gun";
    }
};




int main()
{

    derivedx dobj;    

    cout<<"Inside Main Function\n";

    cout<<"Size of Base Class"<<sizeof(base)<<"\n";//8
    cout<<"Size of Base Class"<<sizeof(derived)<<"\n";//16
    cout<<"Size of Base Class"<<sizeof(derivedx)<<"\n";//24
    cout<<dobj.i<<"\n";//10
    cout<<dobj.j<<"\n";//20
    cout<<dobj.x<<"\n";//30
    cout<<dobj.y<<"\n";//40
    cout<<dobj.a<<"\n";//50
    cout<<dobj.b<<"\n";//50


    dobj.Fun();//Inside fun of base
    dobj.Gun();//Inside gun of base
    dobj.sun();//Inside sun of base





    return 0;
}