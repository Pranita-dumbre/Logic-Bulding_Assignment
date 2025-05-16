//////////////////////////////////////////////////////////
//
//  File name :   question36.c
//  Discreption : Used to calculate area of circle
//  Author :      Pranita Purushottam Dumbre
//  Date :        15/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float fPI = 3.14;

    dArea = fPI * fRadius * fRadius;

    return dArea;
}


int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of cricle is : %f",dRet);

    return 0;
}