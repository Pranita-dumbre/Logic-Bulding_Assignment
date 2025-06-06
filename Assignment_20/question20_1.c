//////////////////////////////////////////////////////////
//
//  File name :   question19_3.c
//  Discreption : Used accept N number check the number is present or not
//  Author :      Pranita Purushottam Dumbre
//  Date :        04/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    
}

int main()
{
    int iSize = 0, iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
    BOOL bRet = false;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number : \n");
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

    bRet = Check(ptr,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else    
    {
        printf("Number is absent");
    }

    free(ptr);

    return 0;
}