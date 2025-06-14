//this program error on linux use #include<fcntl.h>
#include<stdio.h>
#include<unistd.h>

int main()
{
    int fd = 0;   //fd is file discription
    char Fname[20] = {'\0'};

    printf("Enter the name of file : \n");
    scanf("%s",Fname);

    fd = creat("Demo.txt",0777);

    printf(sizeof(fd));

    return 0;
}