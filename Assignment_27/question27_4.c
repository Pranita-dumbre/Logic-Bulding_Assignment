#include<stdio.h>

char StrCpySmall(char *src, char *dest)
{
    if(*src == '\0')
    {
        return -1;
    }

    while(*src !='\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
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

    StrCpySmall(arr,brr);

    printf("%s\n",brr);

    return 0;
}