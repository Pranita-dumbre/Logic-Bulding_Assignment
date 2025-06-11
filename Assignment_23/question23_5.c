//////////////////////////////////////////////////////////
//
//  File name :   question23_4.c
//  Discreption : accept character display its decimal, octal and hexadecimal value
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
    printf(" Decimal : %2d\n",ch);

    printf("Octal : 0%o\n",ch);

    printf("Hexadecimal : 0X%x\n",ch);
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