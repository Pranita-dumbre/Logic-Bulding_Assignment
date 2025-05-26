///////////////////////////////////////////////////////////
//
//  File name :   question12_3.c
//  Discreption : Used to Display Pattern
//  Author :      Pranita Purushottam Dumbre
//  Date :        21/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int iCnt  = 1;
    int i = 0, j = 0;
    
    for(i = 1,iCnt = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++,iCnt++)
        {
            if ((iCnt <= 9))
            {
                printf("%d\t",iCnt);
            }
            if(iCnt > 9)
            {
                iCnt = 1;
                printf("%d\t",iCnt);
                iCnt++;
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