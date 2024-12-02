#include<stdio.h>
#include<string.h>

int main()
{
    char arr[]="Python";

    printf("length of string is %d\n",strlen(arr));
    printf("Size of string is %d\n",sizeof(arr));
    printf("%c\n",arr[3]);
    printf("%c\n",arr[5]);
    printf("%c\n",arr[1]);

    return 0;

}