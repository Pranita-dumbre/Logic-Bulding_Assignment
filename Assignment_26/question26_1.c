#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    BOOL bFalg = false;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            return 1;
            break;
        }
        str++;
    }
    
}

int main()
{
    char Arr[20] = {'\0'};
    BOOL bRet = false;
    char cValue = '\0';

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);

    printf("Enter the charactor : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Charactor found");
    }
    else
    {
        printf("charactor not found");
    }

    return 0;
}