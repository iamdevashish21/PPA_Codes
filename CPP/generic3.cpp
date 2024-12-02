#include<iostream>
using namespace std;

float addition(float no1,float no2)
{
    float ans=0;
    ans= no1+no2;
    return ans;
}

int main()
{
    float a=10.90,b=11.60;

    cout<<addition(a,b)<<"\n";
}
