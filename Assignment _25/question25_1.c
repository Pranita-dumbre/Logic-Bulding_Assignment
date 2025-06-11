#include<stdio.h>

int strlwrx(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        printf("%c",*str);
        str++;
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    return 0;
}