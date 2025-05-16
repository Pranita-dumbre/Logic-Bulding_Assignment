///////////////////////////////////////////////////////////
//
//  File name :   question21.c
//  Discreption : Used to print number of $ anf *
//  Author :      Pranita Purushottam Dumbre
//  Date :        28/04/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    while (iCnt <= iNo)
    {
        printf(" $  * ");
        iCnt++;
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}