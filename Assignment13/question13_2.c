///////////////////////////////////////////////////////////
//
//  File name :   question13.2.c
//  Discreption : Used to Display Pattern
//  Author :      Pranita Purushottam Dumbre
//  Date :        21/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char Ch1 = '\0';
    char Ch2 = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, Ch1 = 'A', Ch2 = 'a'; j <= iCol; j++)
        {
            if((i % 2) != 0)
            {
                printf("%c\t",Ch1);
                Ch1++;
            }
            else
            {
                printf("%c\t",Ch2);
                Ch2++;
            }
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