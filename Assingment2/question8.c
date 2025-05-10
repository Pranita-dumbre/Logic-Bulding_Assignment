#include<stdio.h>

void Check(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
   int iValue = 0;

   printf("Enter your number : ");
   scanf("%d", &iValue);
    
    Check(iValue);
    
    return 0;
}