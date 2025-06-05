//////////////////////////////////////////////////////////
//
//  File name :   question19_5.c
//  Discreption : Used accept N number and display frequency
//  Author :      Pranita Purushottam Dumbre
//  Date :        03/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

BOOL Frequency(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;  
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0, iValue = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number :\n");
    scanf("%d",&iValue);

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

    iRet = Frequency(ptr,iSize,iValue);
    
    printf("%d",iRet);

    free(ptr);

    return 0;
}