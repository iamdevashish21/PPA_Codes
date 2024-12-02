#include<iostream>
using namespace std;

class demo
{

    public:
     int a,b;
    
};

int main()
{

    int no1=10;    
    const int no2=10;

    no1++; //allowed
    no2++; //not allowed


    no1=21; //allowed  //reininilization
    no2=22; //not allowed



    return 0;

}