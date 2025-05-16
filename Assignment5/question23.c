//////////////////////////////////////////////////////////
//
//  File name :   question23.c
//  Discreption : Used to display number line
//  Author :      Pranita Purushottam Dumbre
//  Date :        14/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = -iNo;
    
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