///////////////////////////////////////////////////////////
//
//  File name :   question22.c
//  Discreption : Used to print numbers form 1 to that number
//  Author :      Pranita Purushottam Dumbre
//  Date :        28/04/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iCnt <= iNo)
    {
        printf(" %d ",iCnt);
        iCnt++;
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}