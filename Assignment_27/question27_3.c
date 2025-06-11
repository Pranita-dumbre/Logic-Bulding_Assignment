#include<stdio.h>

char StrCpyCap(char *src, char *dest)
{
    if(*src == '\0')
    {
        return -1;
    }

    while(*src !='\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            *dest++;
        }
        src++;
    }
    return *dest;
    
}

int main()
{
    char arr[30] = "Marvellous Multi OS";

    char brr[30] = {'\0'};

    StrCpyCap(arr,brr);

    printf("%s\n",brr);

    return 0;
}