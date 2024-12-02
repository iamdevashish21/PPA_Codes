#include<iostream>

using namespace std;

class demo
{
    public:
    int i,j;
    static int k;

    demo()
    {
        i=10;
        j=20;
    }

    void fun()
    {
        cout<<"Inside non static fun";
        cout<<this->i<<"\n";
        cout<<this->j<<"\n";
        cout<<k<<"\n";
    }

    static void gun()
    {
         cout<<"Inside static gun\n";
          cout<<k<<"\n";
    }

};
int demo :: k=30;

int main()
{

    cout<<"Value of k is :"<<demo::k<<"\n";
    demo::gun();

    demo dobj1;
    demo dobj2;


    dobj1.fun();
    dobj2.fun();

    dobj1.gun();
    dobj2.gun();


    cout<<"value of k using object"<<dobj1.k<<"\n";
    cout<<"value of k using object"<<dobj2.k<<"\n";;
    return 0;
}