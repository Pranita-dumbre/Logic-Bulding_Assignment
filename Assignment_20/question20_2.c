//////////////////////////////////////////////////////////
//
//  File name :   question20_2.c
//  Discreption : Used accept N number and display index od first occurrence
//  Author :      Pranita Purushottam Dumbre
//  Date :        03/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int *ptr = NULL;
     int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;

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

    iRet = FirstOcc(ptr,iSize,iValue);
    
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("The first occurrence of number is %d",iRet);
    }

    free(ptr);

    return 0;
}