#include<stdio.h>

int Firstchar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }
        iCnt++;
        str++;
    }
    
}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the charactor : \n");
    scanf(" %c",&cValue);

    iRet = Firstchar(arr,cValue);

    printf("Charactor frequency is %d",iRet);

    return 0;
}