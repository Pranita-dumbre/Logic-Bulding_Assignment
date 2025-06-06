//////////////////////////////////////////////////////////
//
//  File name :   question21_4.c
//  Discreption : Used accept N charactor and check is small case or not
//  Author :      Pranita Purushottam Dumbre
//  Date :        05/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }

    return 0;
}