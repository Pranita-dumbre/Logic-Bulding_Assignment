#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int UINT;

int CheckBit(UINT iNo)
{
    int iMasked = 448;
    int iResult = 0;

    iResult = iNo & iMasked;

    if(iResult != iMasked)
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
        printf("7th, 8th and 9th both bit are ON");

    }
    else
    {
        printf("7th, 8th and 9th both bit are oFF");

    }

    return 0;
}