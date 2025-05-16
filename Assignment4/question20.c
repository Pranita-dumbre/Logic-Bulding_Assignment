///////////////////////////////////////////////////////////
//
//  File name :   question20.c
//  Discreption : Used to diffrence between summation of factors and non-factors
//  Author :      Pranita Purushottam Dumbre
//  Date :        28/04/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        if(iNo % iCnt != 0)
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    iDiff = iSum1 -iSum2;
    return iDiff;     
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Diff is : %d",iRet);

    return 0;
}