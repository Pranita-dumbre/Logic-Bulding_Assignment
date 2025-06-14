#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> 
#include<string.h>

#define BUFFER_SIZE 1024

int CountSpace(char FName[])
{
    int fd = 0, iRet = 0, iCnt = 0, iSpace = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    while((read(fd, Buffer, BUFFER_SIZE)) != 0)
    {
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
            if((Buffer[iCnt] >= ' '))
            {
                iSpace++;
            }
        }
        memset(Buffer, '\0', BUFFER_SIZE);
    }
    close(fd);

    return iSpace;
}

int main()
{
    char Filename[30] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0, iRet = 0;  

    printf("Enter the file name : \n");
    scanf("%s",Filename);

    fd = open(Filename, O_RDONLY);      
    
    if(fd == -1)
    {
        printf("Unable to open");
    }

    iRet = CountSmall(Filename);


    printf("Number of spaces are %d\n", iRet);

    return 0;
}