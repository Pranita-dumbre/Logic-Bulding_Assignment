#include<stdio.h>

char StrCpyX(char *scr, char *dest,int iCnt)
{
    if(*scr == '\0')
    {
        return -1;
    }

    while ((*scr != '\0') && (iCnt != 0))
    {
        *dest = *scr;
        scr++;
        dest++;
        iCnt--;

    }
    return *dest;
    
}

int main()
{
    char arr[30] = "Marvellous Multi OS";

    char brr[30] = {'\0'};

    StrCpyX(arr,brr,10);

    printf("%s\n",brr);

    return 0;
}