#include<stdio.h>
#pragma pack(1)
struct demo
{
 int no;        //4
 float f;      // 4
 char c;      // 1
 double d;   //8
            // total 17

};

union hello
{
 int no; //4
 float f;  // 4
 char c;   // 1
 double d;  //8
            // largest ghenar fakt

};

int main()
{

    struct demo obj;
    union  hello dobj;

    printf("size of structure is :%d\n",sizeof(obj));
    printf("size of union is :%d\n",sizeof(dobj));

    






    return 0;
}