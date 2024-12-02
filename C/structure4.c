#include<stdio.h>

struct Demo
{

    int no=11;
    float f;
    double d;
    int i;
};

int main()
{
    struct Demo obj;
    struct Demo *ptr = &obj;

    ptr->no=11;
    ptr->f=11;
    ptr->d=11;
    ptr->i=11;

printf("%d\n",ptr->no);


    return 0;
}