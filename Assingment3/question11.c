#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 1;
    int iEno = 2;

    if(iNo <= 0)
    {
        return;
    }
    while(iCnt <= iNo)
    {
        printf("%d\n", iEno);
        iEno = iEno + 2;
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);
    PrintEven(iValue);
    return 0;
}