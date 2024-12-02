#include<stdio.h>


struct demo
{
    int no;
    float f;

};
int main()
{

    struct demo arr[3];
    arr[0].no=11;
    arr[0].f=10.1;

    arr[1].no=21;
    arr[1].f=20.1;

    arr[2].no=31;
    arr[2].f=30.1;


    printf("%d\n",arr[0].no);
    printf("%f\n",arr[0].f);
    

    printf("%d\n",arr[1].no);
    printf("%f\n",arr[1].f);


    printf("%d\n",arr[2].no);
    printf("%f\n",arr[2].f);




return 0;

}