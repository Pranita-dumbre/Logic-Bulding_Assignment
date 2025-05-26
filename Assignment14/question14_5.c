///////////////////////////////////////////////////////////
//
//  File name :   question14_5.c
//  Discreption : Used to Display Pattern
//  Author :      Pranita Purushottam Dumbre
//  Date :        21/05/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt1 = 0,iCnt2 = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,iCnt1 = iRow,iCnt2 = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iCnt1);
                iCnt1--;
            }
            else
            {
               printf("%d\t",iCnt2);
               iCnt2++;
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
