//////////////////////////////////////////////////////////
//
//  File name :   question27.c
//  Discreption : Used to a single digit print into word
//  Author :      Pranita Purushottam Dumbre
//  Date :        28/04/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo <= 9)
    {
        if(iNo == 9)
        {
            printf("Nine");
        }
        if(iNo == 8)
        {
            printf("Eight");
        }
        if(iNo ==  7)
        {
            printf("Seven");
        }
        if(iNo == 6)
        {
            printf("Six");
        }
        if(iNo == 5)
        {
            printf("Five");
        }
        if(iNo == 4)
        {
            printf("Four");
        }
        if(iNo == 3)
        {
            printf("Three");
        }
        if(iNo == 2)
        {
            printf("Two");
        }
        if (iNo == 1)
        {
            printf("One");
        }
        if(iNo == 0)
        {
            printf("Zero");
        }
        
    }
    else
    {
        printf("Enter valid number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);


    return 0;
}