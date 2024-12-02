#include<iostream>

using namespace std;

class base
{
    public:
        int i;
        float f;

        virtual void gun()=0;
        virtual void sun()=0;
         virtual void run()
         {
            cout<<"Base run";
         }
};

class derived:public base
{
    public:
        int i;
        double d;

            void sun()
            {
                cout<<"Derived sun";
            }
            void fun()
            {
                cout<<"Derived fun";
            }
            void gun()
            {
                cout<<"Derived gun";
            }


            virtual void mun()
            {
                cout<<"Derived mun";
            }
         

};
int main()
{
    base *bp=NULL;
    derived dobj;

    bp=&dobj;

    //bp->fun();
    bp->gun();//derived
    bp->sun();//derived
    bp->run();//base
    //bp->mun();
}