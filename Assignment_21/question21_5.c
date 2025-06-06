//////////////////////////////////////////////////////////
//
//  File name :   question21_4.c
//  Discreption : Used accept N number and display 3 digit number
//  Author :      Pranita Purushottam Dumbre
//  Date :        05/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0, iSum = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iCount = Arr[iCnt];

        while(iCount != 0)
        {
            iSum = 0;
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        printf("%d\n",iSum);
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);


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

    Range(ptr,iSize);

    free(ptr);

    return 0;
}