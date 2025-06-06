//////////////////////////////////////////////////////////
//
//  File name :   question20_2.c
//  Discreption : Used accept N number and display product of all odd number
//  Author :      Pranita Purushottam Dumbre
//  Date :        03/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iMul = 1;
    int iFlag = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iMul = iMul * (Arr[iCnt]);
            iFlag = 1;
        }
    }
    if(iFlag == 0)
    {
        return 0;
    }
    else
    {
        return iMul;
    }
}

int main()
{
    int *ptr = NULL;
     int iSize = 0, iCnt = 0, iRet = 0;

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

    iRet = Product(ptr,iSize);
    
    printf("Product  is : %d",iRet);

    free(ptr);

    return 0;
}