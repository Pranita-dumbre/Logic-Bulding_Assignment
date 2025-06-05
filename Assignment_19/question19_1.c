//////////////////////////////////////////////////////////
//
//  File name :   question19_1.c
//  Discreption : Used accept N number display the count of even
//  Author :      Pranita Purushottam Dumbre
//  Date :        03/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
   return iCount;
    
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

    iRet = Display(ptr,iSize);

    printf("Result is %d",iRet);

    free(ptr);

    return 0;
}