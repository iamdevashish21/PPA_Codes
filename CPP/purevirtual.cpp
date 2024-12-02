#include<iostream>

using namespace std;

class base
{
    public:
    int a,b;

//1000
    int addition(int no1,int no2)  //concrete method
    {
       return no1+no2;
    }

    virtual int substraction(int no1,int no2)=0; //Abstract Method
};

class derived: public base
{

    public:
    int x,y;

//2000
    int multiplication(int no1,int no2) //concrete method
    {
       return no1*no2;
    }

//3000
    int substraction(int no1,int no2) //concrete method
    {
       return no1-no2;
    }
};

int main()
{
    
        //base bobj; not allowed
    derived dobj;

    cout<<"Addition is :"<<dobj.addition(11,10)<<"\n";
    cout<<"Substraction is :"<<dobj.substraction(11,10)<<"\n";
    cout<<"Multiplication is :"<<dobj.multiplication(11,10)<<"\n";

cout<<"size of base :"<<sizeof(base)<<"\n";
cout<<"size of base :"<<sizeof(derived)<<"\n";

    return 0;
}