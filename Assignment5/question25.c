//////////////////////////////////////////////////////////
//
//  File name :   question25.c
//  Discreption : Used to display first 5 multiple of N number
//  Author :      Pranita Purushottam Dumbre
//  Date :        14/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

int MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    for(iCnt = 1; iCnt <= iNo+1; iCnt++)
    {
        iMul = iNo * iCnt;
        printf(" %d ",iMul);
    }   
}

int main()
{
    int iValue = 0;

    printf("Enter thr number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}