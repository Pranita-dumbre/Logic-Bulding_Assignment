#include<stdio.h>

void Reverse(char *str)
{
    int iCount = 0;
    int iCnt = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    str--;
    for(iCnt = iCount; iCnt > 0; iCnt--)
    {
        printf("%c",*str);

        str--;
    }
}

int main()
{
    char arr[20];

    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}