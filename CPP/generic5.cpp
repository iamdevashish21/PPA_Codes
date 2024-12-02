#include<iostream>
using namespace std;

template <class D>
D addition(D no1,D no2)
{
    D ans;
    ans= no1+no2;
    return ans;
}

int main()
{
    float a=10.90,b=11.60;
    cout<<addition(a,b)<<"\n";

    float x=10,y=11;
    cout<<addition(x,y)<<"\n";

    float p=90.90,q=78.90;
    cout<<addition(p,q)<<"\n";

    return 0;
}
