#include<iostream>
using namespace std;

class demo{
    public:
    int a;

    private:
    int b;

    public:
       demo()
       {
        a=11;
        b=21;
       }

       void fun()
       {
         cout<<"Value of A: "<<a<<"\n"; //allowed
         cout<<"Value of B: "<<b<<"\n"; //allowd
       }


};
int main()
{
    demo obj;
    obj.fun();

         cout<<"Value of A: "<<obj.a<<"\n"; //allowed
         cout<<"Value of B: "<<obj.b<<"\n"; //not allowed

    return 0;

}