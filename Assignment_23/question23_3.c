//////////////////////////////////////////////////////////
//
//  File name :   question21_4.c
//  Discreption : accept character display all the character upto a or z
//  Author :      Pranita Purushottam Dumbre
//  Date :        05/06/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void Display(char ch)
{
    char ch1 = '\0';
    while((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c  ",ch);
        ch--;
    }

    while ((ch >= 'A' && ch <= 'Z'))
    {
       printf("%c  ",ch);
       ch++;
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