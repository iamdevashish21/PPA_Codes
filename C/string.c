#include<stdio.h>
#include<string.h>

int main()
{   
    char arr []={'H','e','l','l','o','\0'};

    char brr[]="Hello";

    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(brr));

printf("Length of strting is %d\n",strlen(arr));
printf("Length of strting is %d\n",strlen(brr));




    return 0;
}