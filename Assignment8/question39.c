///////////////////////////////////////////////////////////
//
//  File name :   question39.c
//  Discreption : Used to convert Fahrenheit into celsius
//  Author :      Pranita Purushottam Dumbre
//  Date :        15/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dFaren = 0.0;
    dFaren = (((fTemp - 32) * 5) / 9);
    return dFaren;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius %lf\n",dRet);

    return 0;
}