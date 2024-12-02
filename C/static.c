#include<stdio.h>

void display()
{
    int i=10;
    static int j=10;

    i++;
    j++;

    printf("Value of i:%d\n",i);
    printf("Value of j:%d\n",j);
}

int main()
{
    display();
    display();
    display();
    display();

}