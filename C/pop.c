#include<stdio.h>
int addition(int value1,int value2)
{
    int result=0;

    result=value1+value2;
    return result;

};

int substraction(int value1,int value2)
{
    int result=0;

    result=value1-value2;
    return result;

};

int main()
{
    int a=0,b=0,ans=0;

    printf("Enter 1st no: \n");
    scanf("%d",&a);


    printf("Enter 2nd no: \n");
    scanf("%d",&b);

    ans=addition(a,b);
    printf("The Addition is %d\n",ans);

    ans =substraction(a,b);
    printf("The Addition is %d\n",ans);


    return 0;
}