//////////////////////////////////////////////////////////
//
//  File name :   question24.c
//  Discreption : Used to display odd number 1 to N number
//  Author :      Pranita Purushottam Dumbre
//  Date :        14/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf(" %d ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}