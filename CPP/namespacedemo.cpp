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
    using namespace Marvellous;
    demo dobj;
    dobj.Display();

    return 0;
}