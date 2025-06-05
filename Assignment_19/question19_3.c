//////////////////////////////////////////////////////////
//
//  File name :   question19_3.c
//  Discreption : Used accept N number check 11 is present or not
//  Author :      Pranita Purushottam Dumbre
//  Date :        03/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    BOOL bRet = false;

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

    bRet = Check(ptr,iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else    
    {
        printf("11 is absent");
    }

    free(ptr);

    return 0;
}