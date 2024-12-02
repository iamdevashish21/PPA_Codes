#include<stdio.h>

int main()
{
   int no=0,result=0;

   printf("Enter No:\n");
   scanf("%d",&no);

   result=no%2;

   if (result == 0)
   {
    printf("It is even no\n");
   }
   else
   {
    printf("It is odd no\n");
   }

    return 0;
}