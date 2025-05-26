//////////////////////////////////////////////////////////
//
//  File name :   question11_3.c
//  Discreption : Used to Display Pattern
//  Author :      Pranita Purushottam Dumbre
//  Date :        20/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);                   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements :  \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}