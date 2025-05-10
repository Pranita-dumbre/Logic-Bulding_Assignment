#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo%2 == 0)
    {
        printf("Given number is even");
    }
    else
    {
        printf("Given number is odd");
    } 
}

int main()
{
   int iValue = 0;
   BOOL bRet = FALSE;
   
   printf("Enter the number");
   scanf("%d",&iValue);

   bRet = ChkEven(iValue);

    return 0;
}
/*#include<stdio.h>

void Check(int iValue)
{
    if(iValue%2 == 0)
    {
        printf("Given number is even");
    }
    else
    {
        printf("Given number is odd");
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the number");
    scanf("%d",&iNo);

    Check(iNo);

    return 0;
}*/