//////////////////////////////////////////////////////////
//
//  File name :   question38.c
//  Discreption : Used to convert feet into square meter
//  Author :      Pranita Purushottam Dumbre
//  Date :        15/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

double SquareMeter(int iValue)
{
    double dNO = 0;
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    dNO = iValue * 0.0929; 
    return dNO;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%lf square meter",dRet);

    return 0;
}