#include<iostream>

using namespace std;

class demo{
    public:
        int i;
    private:
        int j;
    protected: 
        int k;  

        public:
        demo()
        {
            i=10;
            j=20;
            k=30;
        }   

    friend void fun() ;  
};
//nacked fun 
void fun()
{
    demo obj;

    cout<<obj.i<<"\n";//allowed
    cout<<obj.j<<"\n";//not allowed
    cout<<obj.k<<"\n";//not allowed no relation
}
int main()
{
fun();

    return 0;
}