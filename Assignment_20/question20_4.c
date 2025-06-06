//////////////////////////////////////////////////////////
//
//  File name :   question20_2.c
//  Discreption : Used accept N number and display range
//  Author :      Pranita Purushottam Dumbre
//  Date :        03/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength,int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] < iEnd))
        {
            printf("%d  ",Arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr = NULL;
     int iSize = 0, iCnt = 0, iRet = 0, iValue1 = 0, iValue2 = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Starting point :\n");
    scanf("%d",&iValue1);

    printf("Ending point :\n");
    scanf("%d",&iValue2);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Range(ptr,iSize,iValue1,iValue2);

    free(ptr);

    return 0;
}