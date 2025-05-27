///////////////////////////////////////////////////////////
//
//  File name :   question17_5.c
//  Discreption : Used to Display Pattern
//  Author :      Pranita Purushottam Dumbre
//  Date :        25/05/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 0;

    if(iRow != iCol)
    {
        printf("Invalid input");
        return;
    }

    for(i = 1; i <= iRow + 1; i++)
    {
        for(j = 1,iCnt = 1; j <= iCol + 1; j++, iCnt++)
        {
            if((i == iRow+1)|| (i == 1) || (j == iCol + 1) || (j == 1) || (i == j))
            {
                printf("%d\t",iCnt);
            }
            else
            {
                printf("  \t");
            }
        }
        printf("\n"); 
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
