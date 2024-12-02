#include<stdio.h>
#include<stdlib.h>

void display()
{
    int *p=NULL;
    p=(int *)malloc(5*sizeof(int));

    free(p);
    //now p is a dangling pointer.

    return 0;