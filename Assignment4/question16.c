///////////////////////////////////////////////////////////
//
//  File name :   question16.c
//  Discreption : Used to multiplication of factors
//  Author :      Pranita Purushottam Dumbre
//  Date :        14/05/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int MulFactor(int iNo)
{
    int iCnt = 0,iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = MulFactor(iValue);

    printf("Sum is all the factor is : %d",iRet);

    return 0;
}