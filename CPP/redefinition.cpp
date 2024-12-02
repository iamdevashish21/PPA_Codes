#include<iostream>

using namespace std;

class base{


    public:
        void fun()
        {
            cout<<"Inside Base Fun\n";//defination
        }
};


class derived : public base
{
    public:
        void fun() //redefination
        {
            cout<<"Inside derived Fun\n";

        }
};

int main()
{
                cout<<sizeof(base)<<"\n"; //1 byte
                cout<<sizeof(derived)<<"\n"; //1 byte

                base bobj;
                bobj.fun();

                derived dobj;
                dobj.fun();
    return 0;
}