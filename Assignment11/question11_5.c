/////////////////////////////////////////////////////////
//
//  File name :   question11_4.c
//  Discreption : Used to Display Pattern
//  Author :      Pranita Purushottam Dumbre
//  Date :        20/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iMul = 0;
    
    for(iCnt = 1; iCnt <= 2 *iNo; iCnt++)
    {
        if((iCnt %  2)==0)
        {
        iMul = 1 * iCnt;
        printf("%d\n",iCnt);
        }
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

//The time complexity is : 2N