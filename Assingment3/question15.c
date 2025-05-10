#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

char ChKVowel(char cNo)
{
    if(cNo == 97 || cNo == 65||cNo == 101 ||cNo == 105 ||cNo == 111 ||cNo == 117 ||cNo == 69 ||cNo == 73 ||cNo == 79 ||cNo == 85)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}


int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character \n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else 
    {
        printf("It is not Vowel");
    }




    return 0;
}