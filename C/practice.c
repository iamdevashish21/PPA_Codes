#include<stdio.h>
int main()
struct demo
{
    int i;
    float f=10.0;
    double d;
};

{
double no = 3.14;
double *a = &no;
double **b = &a;
double **c = &b;
double **d = &c;
// Consider address of no as 100
// Consider address of a as 200
// Consider address of b as 300
// Consider address of c as 400
// Consider address of d as 500
printf ("%d",sizeof(no));
printf("%d",sizeof(a));
printf("%d",sizeof(b));
printf("%d",sizeof(c));
printf("%d",sizeof(d));
printf("%d",sizeof(**d));
printf("%d",sizeof(**d));


    return 0;
}