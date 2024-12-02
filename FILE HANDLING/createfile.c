#include<stdio.h>
#include<fcntl.h>

int main()
{
    char FileName[20];
    int FD=0;

    printf("Enter the file name that you want to create:\n");
    scanf("%s",FileName);

    FD=creat(FileName,0777);
    if (FD==-1)
    {
    printf("Unabel to create the file\n");
    }
    else
    {
        printf("File is sucessfully create with FD%d\n",FD);

    }
    return 0;
}