#include<stdio.h>

char StrCpyX(char *scr, char *dest)
{
    if(*scr == '\0')
    {
        return -1;
    }

    while (*scr != '\0')
    {
        *dest = *scr;
        scr++;
        dest++;
    }
    return *dest;
    
}

int main()
{
    char arr[30] = "Marvellous Multi OS";

    char brr[30] = {'\0'};

    StrCpyX(arr,brr);

    printf("%s\n",brr);

    return 0;
}