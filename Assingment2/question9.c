#include<stdio.h>

int Display(int iNo, int ifrequency)
{
    int icnt = 0;

    for(icnt = 1; icnt <= ifrequency; icnt++)
    {
        printf("%d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    int icount = 0;

    printf("Enter the number which one can repated : \n ");
    scanf("%d", &iValue);

    printf("How many time repate it : \n");
    scanf("%d", &icount);

    Display(iValue, icount);


    return 0;
}
/*#include<stdio.h>

void Display(int iValue1, int ifrequency)
{
    int icnt = 0;

    for(icnt = 1; icnt <= ifrequency; icnt++)
    {
        printf("%d", iValue1);
    }
}

int main()
{
    int iNo1 = 0;
    int icount = 0;

    printf("Enter the number which one can repated : \n ");
    scanf("%d", &iNo1);

    printf("How many time can repate it : \n");
    scanf("%d", &icount);

    Display(iNo1, icount);


    return 0;
} */