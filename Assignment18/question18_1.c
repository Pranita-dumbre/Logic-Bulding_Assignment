//////////////////////////////////////////////////////////
//
//  File name :   question18_1.c
//  Discreption : Used accept N number and display difference between odd and even number
//  Author :      Pranita Purushottam Dumbre
//  Date :        03/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum1 = 0, iSum2 = 0;
    int iDiff = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if((Arr[iCnt] % 2) == 0)
       {
        iSum1= iSum1 + (Arr[iCnt]);
       }
       else
       {
        iSum2 = iSum2 + (Arr[iCnt]);
       }
       iDiff = iSum1 - iSum2;
    }
    return iDiff;
    
}

int main()
{
    int iSize = 0,iRet = 0;
    int *ptr = NULL;
    int iCnt = 0;

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

    iRet = Difference(ptr,iSize);

    printf("Result is %d",iRet);

    free(ptr);

    return 0;
}