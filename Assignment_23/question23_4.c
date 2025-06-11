//////////////////////////////////////////////////////////
//
//  File name :   question23_4.c
//  Discreption : accept character display special symbol
//  Author :      Pranita Purushottam Dumbre
//  Date :        05/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Display(char ch)
{
    if((ch >= '!' && ch <= '/') || (ch >= ':' && ch <= '@'))
    {
       printf("It is special symbol");
    }
    else
    {
        printf("it is not special symbol");
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
   
    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet = Display(cValue);

    return 0;
}