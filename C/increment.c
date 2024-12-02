#include<stdio.h>
int main()
{
    int a=10 , b=10;
    int no1=0 ,no2=0;

    no1=a++;
    printf("value of no1: %d\n",no1);
    printf("value of a: %d\n",a);

    no2=++b;
    printf("value os no1: %d\n",no2);
    printf("value os a: %d\n",b);



    return 0;




}