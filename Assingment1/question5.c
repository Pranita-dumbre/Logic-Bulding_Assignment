#include<stdio.h>

void Accept(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("*");
    }
}

int main()
{
   int iValue = 0;
   iValue = 5;

   printf("Enter the number\n");
   scanf("%d",&iValue);

   Accept(iValue);

    return 0;
}
