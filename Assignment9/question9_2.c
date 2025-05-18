#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = ChkZero(iValue);

    if(iRet == TRUE)
    {
        printf("It Contain Zero ");

    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}