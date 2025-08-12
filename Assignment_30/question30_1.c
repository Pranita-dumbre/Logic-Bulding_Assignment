#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int UINT;

int CheckBit(UINT iNo)
{
    int iMasked = 32768;
    int iResult = 0;

    iResult = iNo & iMasked;

    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("15th bit is ON");

    }
    else
    {
        printf("15th bit is OFF");

    }

    return 0;
}