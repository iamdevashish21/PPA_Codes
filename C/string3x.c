#include<stdio.h>
#include<string.h>

int main()
{
    char arr[]="Python";
    char *str=arr;

    while (*str!='\0')
    {
    printf("%c\n",*str); 
    str++;
    }
    

    return 0;

}