//////////////////////////////////////////////////////////
//
//  File name :   question21_4.c
//  Discreption : accept character display its corresponding upper case charactor
//  Author :      Pranita Purushottam Dumbre
//  Date :        05/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void Display(char ch)
{
    char ch1 = '\0';
    if(ch >= 'a' && ch <= 'z')
    {
        ch1 = ch - 32;
        printf("%c",ch1);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';
   
    printf("Enter the character :\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}