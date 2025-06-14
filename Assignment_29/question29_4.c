#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> 
#include<string.h>

#define BUFFER_SIZE 1024

int CountChar(char FName[], char ch)
{
    int fd = 0, iRet = 0, iCnt = 0, iChar = 0;
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
            if((Buffer[iCnt] == ch))
            {
                iChar++;
            }
        }
        memset(Buffer, '\0', BUFFER_SIZE);
    }
    close(fd);

    return iChar;
}

int main()
{
    char Filename[30] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0, iRet = 0,cValue = 0; 

    printf("Enter the file name : \n");
    scanf("%s",Filename);

    printf("Enter the charactor \n");
    scanf("%c",&cValue);

    fd = open(Filename, O_RDONLY);      
    
    if(fd == -1)
    {
        printf("Unable to open");
    }

    iRet = CountChar(Filename,cValue);


    printf("Frequency of %d is : %d\n",cValue, iRet);


    return 0;
}