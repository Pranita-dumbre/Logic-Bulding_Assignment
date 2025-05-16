//////////////////////////////////////////////////////////
//
//  File name :   question38.c
//  Discreption : Used to convert kilometer to meter
//  Author :      Pranita Purushottam Dumbre
//  Date :        15/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iDist = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iDist = iNo * 1000; 
    return iDist;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d in Meter",iRet);

    return 0;
}