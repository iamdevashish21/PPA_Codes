#include<iostream>
using namespace std;

class demo 
{
        public:
        int addition(int a,int b)
        {
            return a+b;
        }

        double addition(double a,double b)
        {
            return a+b;
        }

         int addition(int a,int b, int c)
        {
            return a+b+c;
        }




};

int main()
{
    class demo obj;

    cout<<obj.addition(10,11)<<"\n";
    cout<<obj.addition(10.50,11.50)<<"\n";
    cout<<obj.addition(10,11,21)<<"\n";


    return 0;
}

