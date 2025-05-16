//////////////////////////////////////////////////////////
//
//  File name :   question31.c
//  Discreption : Used to display the pattern
//  Author :      Pranita Purushottam Dumbre
//  Date :        15/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf(" *  ",iCnt);
    }
    for(iCnt = iNo; iCnt < iNo + iNo; iCnt++)
    {
        printf(" #  ",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}