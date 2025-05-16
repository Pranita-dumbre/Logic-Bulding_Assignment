//////////////////////////////////////////////////////////
//
//  File name :   question32.c
//  Discreption : Used to convert doller into rupees
//  Author :      Pranita Purushottam Dumbre
//  Date :        15/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDollar = 0;
    if(iNo > 0);
    {
        iDollar = iNo * 70;
        return iDollar;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}