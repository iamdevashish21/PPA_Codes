#include<iostream>
using namespace std;

class Array
{
    public :
    int *arr;
    int size;

    Array(int no)
    {
        size=no;
        arr=new int [size];
    }

    ~Array()
    {
        delete []arr;
    }

    void accept()
    {
        cout<<"Enter the elementts\n";
        int icnt=0;
        for ( icnt = 0; icnt < size; icnt++)
        {
            cin>>arr[icnt];
        }
        
    }

    void display()
    {
        cout<<"Elements of the array are\n";
        int icnt=0;
        for ( icnt = 0; icnt < size; icnt++)
        {
            cout<<arr[icnt];
        }

    }
};

int main()
{
    Array aboj(5);
    aboj.accept();
    aboj.display();


    return 0;
}
