#include<iostream>

using namespace std;

class base{


    public:
    int i,j;
        virtual void fun()//1000
        {
            cout<<"Inside Base Fun\n";
        }

        void sun()//2000
        {
            cout<<"Inside Base Gun\n";
        }

        virtual void gun()//3000
        {
            cout<<"Inside Base Sun\n";
        }

        virtual void run()//4000
        {
            cout<<"Inside Base Run\n";
        }
};

class derived : public base
{
    public:
    int x,y;
        virtual void fun() //5000
        {
            cout<<"Inside derived Fun\n";

        }
        void gun() //6000
        {
            cout<<"Inside derived Gun\n";

        }

        virtual void mun() //7000
        {
            cout<<"Inside derived Mun\n";

        }

        void run() //8000
        {
            cout<<"Inside derived Run\n";

        }
};

int main()
{

    cout<<"Size of base class :"<<sizeof(base)<<"\n";  //8
    cout<<"Size of derived class :"<<sizeof(derived)<<"\n"; //16

    derived dobj;

    base *bptr=NULL;

    bptr =&dobj; //upcasting low to high



    bptr->fun(); //base fun
    bptr->gun(); //base gun
    bptr->sun(); //base sun
    bptr->run(); //base run




    return 0;
}