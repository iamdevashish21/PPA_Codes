//Default Argumrnts in C++
#include<iostream>

using namespace std;

float calculate(float radius,float pi=3.14f)
{
    float ans =0.0f;
    ans=pi*radius*radius;
    return ans;
}

int main()
{
    float ret= 0.0f;

    ret= calculate(3.14f); //default 
    cout<<"Area of Circle is:"<<ret<<"\n";

    ret= calculate(10.5f,7.20f);
     cout<<"Area of Circle is:"<<ret<<"\n";

     
    return 0;
}