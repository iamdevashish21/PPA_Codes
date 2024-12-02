#include<stdio.h>

struct Demo     
{
    int no;         
    float f;        
    double d;       
    int i;

};

int main()
{

    struct Demo obj;
    struct Demo *ptr = &obj;

    ptr->no=11;
    ptr->f=3.0;
    ptr->d=13.44666;
    ptr->i=11;

printf("%d\n",ptr->no);


    return 0;
}