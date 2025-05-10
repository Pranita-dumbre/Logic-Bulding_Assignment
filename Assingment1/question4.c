#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE -1

int Check(int iNO)
{
    if((iNO % 5) ==0 )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }


    return 0;
}

/*#include<stdio.h>

int Check(int iValue)
{
    int iAns = 0;
    iAns = (iValue % 5);
    
    return iAns;
}

int main()
{ 
    int iNo = 0;
    int iRet = 0;

    printf("Enter any number\n");
    scanf("%d", &iNo);
    
    iRet = Check(iNo);

    if(iRet == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }

    return 0;
}
    */