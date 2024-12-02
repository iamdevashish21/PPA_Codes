#include<iostream>
using namespace std;


class devashish  
{
    public:
    int a;
    int b;


    void fun()
    {
        cout<<"Inside Fun"<<"\n"; 
    }

    void gun()
    {
        cout<<"Inside gun"; 
    }
};

int main()
{

    devashish obj ;

    obj.a=11;
    obj.b=12;

    obj.fun();
    obj.gun();

    cout<<obj.a;
    cout<<obj.b;





    return 0;
}