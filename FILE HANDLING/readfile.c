#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char FileName[20];
    int FD=0;

    printf("Enter the file name that you want to open:\n");
    scanf("%s",FileName);
    char Data[100]={'\0'};

    FD=open(FileName,O_RDWR);
    if (FD==-1)
    {
    printf("Unabel to open the file\n");
    return -1;
    }
    else
    {
        printf("File is sucessfully open with FD%d\n",FD);

    }

    read(FD,Data,10);
    printf("Data from file is : %s\n",Data);

    close(FD);
    return 0;
}

