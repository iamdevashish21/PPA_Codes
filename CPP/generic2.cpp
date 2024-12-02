#include<iostream>
using namespace std;

double addition(double no1,double no2)
{
    double ans=0;
    ans= no1+no2;
    return ans;
}

int main()
{
    double a=10.90,b=11.60;

    cout<<addition(a,b)<<"\n";
}
