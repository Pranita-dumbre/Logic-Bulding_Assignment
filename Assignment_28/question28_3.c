#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> 
#include<string.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[10] = {'\0'};

    printf("Enter the file name that we want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);      
    
    if(fd == -1)
    {
        printf("Unable to open");
    }
    else
    {
        printf("File is succesfully open with fd  : %d\n",fd);

        while((iRet = read(fd,Buffer,10) != 0))
        {
            printf("%s",Buffer);
            memset(Buffer,0,10);
        }
        
        close(fd);
    }

    return 0;
}
