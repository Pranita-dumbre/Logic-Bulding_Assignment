///////////////////////////////////////////////////////////
//
//  File name :   question13_3.c
//  Discreption : Used to Display Pattern
//  Author :      Pranita Purushottam Dumbre
//  Date :        21/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char Ch = '\0';

    for(i = 1, Ch = 'A'; i <= iRow; i++,Ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",Ch);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the column :\n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}