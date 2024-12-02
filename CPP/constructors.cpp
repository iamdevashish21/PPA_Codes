#include<iostream>
using namespace std;


class demo
{
    public:
        int a,b;

        demo() //default
        {
            a=0;
            b=0;
        }
        demo(int i,int j) //parameterised
        {
            a=i;
            b=j;
        }

        demo(demo &ref) //copy
        {
            a=ref.a;
            b=ref.b;
        }

        ~demo() //Dstructor
        {
            cout<<"inside Dstructor\n";
        }
};


int main()
{

    demo obj1(11,21);
    demo obj2(obj1);


    cout<<obj1.a<<"\t"<<obj1.b<<"\n";
    cout<<obj2.a<<"\t"<<obj2.b<<"\n";


    return 0;
}