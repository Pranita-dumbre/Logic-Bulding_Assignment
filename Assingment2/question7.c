#include<stdio.h>

int Display(int iNo)
{
    while (iNo > 0)
    {
        printf("*");
        iNo--;
    }    
}

int main()
{
   int iValue = 0;

   printf("Enter the number : ");
   scanf("%d", &iValue);

   Display(iValue);

    return 0;
}