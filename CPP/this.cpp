#include<iostream>

using namespace std;

class demo{
            public:
            int no1,no2;


            demo(int a,int b)
            {
                no1=a;
                no2=b;
            }

            //void display (demo *this, int x)

            void display(int x)
            {
                cout<<"Value of no1 :"<<this->no1<<"\n";
                cout<<"Value of no1 :"<<this->no2<<"\n";
                cout<<"Value of no1 :"<<x<<"\n";
            }



};
int main()
{
    demo obj(11,21);
    obj.display(51);


    return 0;
}