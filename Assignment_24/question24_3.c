#include<stdio.h>

int Difference(char *str)
{
    int iCount1 = 0, iCount2 = 0, iDff = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount1;
        }
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount2++;
        }
        str++;
    }
    iDff = iCount2 - iCount1;
    return iDff;
}

int main()
{
    char arr[20];

    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}