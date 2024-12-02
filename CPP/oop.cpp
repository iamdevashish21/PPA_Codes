#include<iostream>

class arithematic
{
    public:
        int no1;
        int no2;

        arithematic(int a,int b)
        {
            no1=a;
            no2=b;
        }

        int addition()
        {
            int ans =0;
            ans=no1+no2;
            return ans;
        }

        int substraction()
        {
            int ans =0;
            ans=no1-no2;
            return ans; 
        }
};

using namespace std;
int main()
{
    int value1=0,value2=0,ret=0;

    cout<<"Enter first No \n";
    cin>>value1;

    cout<<"Enter second No \n";
    cin>>value2;

    arithematic obj(value1,value2);

    ret=obj.addition();
    cout<<"Addition is"<<ret<<"\n";

        ret=obj.substraction();
    cout<<"substraction is"<<ret<<"\n";



    return 0;
}