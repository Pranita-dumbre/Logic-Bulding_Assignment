#include<stdio.h>

void DisplayFactor(int iValue)
{
    int icnt = 0;
    if(iValue <= 0)
    {
        iValue = -iValue;
    }
    for(icnt = 1; icnt < iValue; icnt++)
    {
        if(iValue % icnt == 0)
        {
            printf(" %d ",icnt);
        }
    }
    
} 

int main()
{
    int iNo = 0;

    printf("Enter number : ");
    scanf("%d", &iNo);

    DisplayFactor(iNo);

    return 0;
}