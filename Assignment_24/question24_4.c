#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while (*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return true;
        }
        str++;
    }
    
}

int main()
{
    char Arr[20] = {'\0'};
    BOOL bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == true)
    {
        printf("Contains Vowle");
    }
    else
    {
        printf("There is no Vowle");
    }

    return 0;
}