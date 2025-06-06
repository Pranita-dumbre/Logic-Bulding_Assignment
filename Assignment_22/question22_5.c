//////////////////////////////////////////////////////////
//
//  File name :   question21_4.c
//  Discreption : Used accept division and display the time of exam
//  Author :      Pranita Purushottam Dumbre
//  Date :        05/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DiplaySchedule(char chDiv)
{
    if( chDiv == 'A')
    {
        printf("Your exam at 7 AM");
    }
    if( chDiv == 'B')
    {
        printf("Your exam at 8:30 AM");
    }
    if( chDiv == 'C')
    {
        printf("Your exam at 9:20 AM");
    }
    if( chDiv == 'D')
    {
        printf("Your exam at 10:30 AM");
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your division :\n");
    scanf("%c",&cValue);

    bRet = DiplaySchedule(cValue);

    return 0;
}