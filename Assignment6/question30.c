//////////////////////////////////////////////////////////
//
//  File name :   question30.c
//  Discreption : Used to display table in reverse order
//  Author :      Pranita Purushottam Dumbre
//  Date :        15/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iSum = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10; iCnt >=1; iCnt--)
    {
        iSum = iNo * iCnt;
        printf(" %d ",iSum);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}