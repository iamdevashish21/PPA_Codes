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

int main()
{

    derived dobj;


    cout<<"Inside Main Function\n";

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";


    dobj.Fun();
    dobj.Gun();
    return 0;
}