//////////////////////////////////////////////////////////
//
//  File name :   question33.c
//  Discreption : Used to find even factorical of given number
//  Author :      Pranita Purushottam Dumbre
//  Date :        15/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

int EvenFactorical(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
        iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);
  
    iRet = EvenFactorical(iValue);

    printf("Even Factorical of number is : %d ",iRet);

    return 0;
}