///////////////////////////////////////////////////////////
//
//  File name :   question17.c
//  Discreption : Used to display Non-factors
//  Author :      Pranita Purushottam Dumbre
//  Date :        14/05/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void NonFactor(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    NonFactor(iValue);


    return 0;
}