///////////////////////////////////////////////////////////
//
//  File name :   question17.c
//  Discreption : Used to display factors in decreasing order
//  Author :      Pranita Purushottam Dumbre
//  Date :        14/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo - 1; iCnt < iNo; iCnt--)
    {
        if (iNo % iCnt == 0)
        {
            printf(" %d ",iCnt);  
        }
    }
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}