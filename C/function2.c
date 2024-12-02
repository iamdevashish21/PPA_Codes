#include<stdio.h>

//funcrion defination means logic of function
int addition(int value1,int value2)
{
    int result =0;            //local variable

    result= value1 + value2; 
    return result;

}

int main()                    // Entry point function
{

    int no1=0, no2=0,ans =0;  //local variable


    printf("Enter 1st No: \n");
    scanf("%d",&no1);

    printf("Enter 2nd No: \n"); 
    scanf("%d",&no2);

    ans=addition(no1,no2);     //function call
    printf("addition is %d\n",ans);

    return 0;
}