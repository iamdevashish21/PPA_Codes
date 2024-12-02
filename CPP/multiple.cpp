#include<iostream>
using namespace std;

class base1
{
    public :
       int i,j;

       base1()
       {
        cout<<"Inside Base1 Constructor\n";
        i=10;
        j=20;
       }

      ~base1()
       {
        cout<<"Inside Base1 Destructor\n";
       }

       void fun()
       {
         cout<<"Inside Fun of base1\n";

       }



};


class base2
{
    public :
       int x,y;

       base2()
       {
        cout<<"Inside Base2 Constructor\n";
        x=30;
        y=40;
       }

      ~base2()
       {
        cout<<"Inside Base2 Destructor\n";
       }

       void gun()
       {
         cout<<"Inside Fun of base2\n";

       }


};


class derived: public base2,public base1
{
    public :
    int a,b;

    derived()
    {
        cout<<"Inside derived Constructor\n";

    }

    ~derived()
    {
        cout<<"Inside derived Constructor\n";

    }

    void sun()
    {
        cout<<"Inside Derived Sun\n";
    }
};


int main()
{

    derived dobj;

      cout<<sizeof(base1)<<"\n";//8
      cout<<sizeof(base2)<<"\n";//8
      cout<<sizeof(derived)<<"\n";//24




    return 0;
}