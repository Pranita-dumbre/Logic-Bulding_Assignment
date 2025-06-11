#include<stdio.h>
void StrCpySmall(char *src, char *dest)
{
   /* if(*src == '\0')
    {
        return;
    }*/

    while(*src !='\0')
    {
        src++;
    }
    *src = ' ';
    src++;

    while (*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    } 
    *src = '\0';
}

int main()
{
    char arr[50] = "Marvellous Multi OS";

    char brr[30] = "Logic Building";

    int iRet = 0;

    StrCpySmall(arr,brr);

    printf("%s",arr);

    /*if(iRet == -1)
    {
        printf("Sring is empty");
    }
    else
    {
        printf("Concatenenated string is : %s\n",iRet);
    }
*/
    return 0;
}