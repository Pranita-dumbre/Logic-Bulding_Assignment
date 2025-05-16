//////////////////////////////////////////////////////////
//
//  File name :   question33.c
//  Discreption : Used to find even factorical of given number
//  Author :      Pranita Purushottam Dumbre
//  Date :        15/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

int FactoricalDiff(int iNo)
{
    int iCnt = 0;
    int iFact1 = 1;
    int iFact2 = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact1 = iFact1  * iCnt;
        }

        if((iCnt % 2) != 0)
        {
            iFact2 = iFact2  * iCnt;
        }
        iDiff = iFact1 - iFact2;
    }
    return iDiff;
    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);
  
    iRet = FactoricalDiff(iValue);

    printf("Factorical difference is : %d ",iRet);

    return 0;
}