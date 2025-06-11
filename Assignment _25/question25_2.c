#include<stdio.h>

int struprx(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
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

    struprx(arr);

    return 0;
}