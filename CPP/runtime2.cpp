#include<iostream>

using namespace std;

class base{


    public:
    int i,j;
        void fun()
        {
            cout<<"Inside Base Fun\n";
        }

        void sun()
        {
            cout<<"Inside Base Gun\n";
        }

        void gun()
        {
            cout<<"Inside Base Sun\n";
        }

        void run()
        {
            cout<<"Inside Base Run\n";
        }
};

class derived : public base
{
    public:
    int x,y;
        void fun() 
        {
            cout<<"Inside derived Fun\n";

        }
        void gun() 
        {
            cout<<"Inside derived Gun\n";

        }
        void sun() 
        {
            cout<<"Inside derived Sun\n";

        }
        void mun() 
        {
            cout<<"Inside derived Mun\n";

        }
};

int main()
{

    derived dobj;

    base *bptr=NULL;

    bptr =&dobj; //upcasting low to high



    bptr->fun(); //base fun
    bptr->gun(); //base gun
    bptr->sun(); //base sun
    bptr->run(); //base run
    //bptr->mun(); //error.



    return 0;
}