#include<stdio.h>
int main()
{


    int standard=0;

    printf("Enter Your Standard\n");
    scanf("%d",&standard);


    switch (standard)
    {
        case 1:
        printf("Your exam is at 8Am\n");
        break;

        case 2:
        printf("Your exam is at 9Am\n");
        break;

        case 3:
        printf("Your exam is at 10Am\n");
        break;

        case 4:
        printf("Your exam is at 11Am\n");
        break;

        default:
        printf("Wrong Choice\n");
    }


    return 0;
}