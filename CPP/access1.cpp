#include<iostream>
using namespace std;

class base
{
    public:
        int i;
    private:
        int j;

    protected:
        int k;

    public:
      base()
      {
        i=10;
        j=20;
        k=30;
      }
        void Gun()
       {
        cout<<i<<"\n"; //allowed
        cout<<j<<"\n"; //allowed
        cout<<k<<"\n"; //allowed
       }
};


class derived: public base
{

    public:
       void fun()
       {
        cout<<i<<"\n"; //allowed
        cout<<j<<"\n"; //not allowed
        cout<<k<<"\n"; //allowed
       }

};


int main()
{

    base bobj;

    cout<<bobj.i<<"\n"; //allowed
    cout<<bobj.j<<"\n"; //not allowed
    cout<<bobj.k<<"\n"; //not allowed
    bobj.Gun();


    return 0;
}