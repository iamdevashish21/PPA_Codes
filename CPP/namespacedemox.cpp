#include<iostream>

using namespace std;

namespace Marvellous
{
    class demo
    {
        public:
        void Display()
        {
            cout<<"Inside Display method\n";
        }
    };
}

int main()
{

    Marvellous::demo dobj;
    dobj.Display();

    return 0;
}