//////////////////////////////////////////////////////////
//
//  File name :   question26.c
//  Discreption : Used to display small,medium and large according to the range 
//  Author :      Pranita Purushottam Dumbre
//  Date :        15/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

int Numbre(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    if(iNo >= 50 && iNo <= 100)    //the loop is not present in it. Therefore no time complexity
    {
        printf("Medium\n");
    }
    if(iNo > 100)
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Numbre(iValue);

    return 0;
}
