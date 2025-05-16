//////////////////////////////////////////////////////////
//
//  File name :   question28.c
//  Discreption : Used to find factorical of given number
//  Author :      Pranita Purushottam Dumbre
//  Date :        14/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

int Factorical(int iNo)
{
    int iCnt = 0, iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= iNo ; iCnt++)   //the time coplexity is N-1
    {
        iFact = iFact * iCnt;
    }
    return iFact;  
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = Factorical(iValue);

    printf("Factorical of number is : %d",iRet);

    return 0;
}