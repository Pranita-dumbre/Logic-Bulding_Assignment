//////////////////////////////////////////////////////////
//
//  File name :   question37.c
//  Discreption : Used to calculate area of rectangle
//  Author :      Pranita Purushottam Dumbre
//  Date :        15/05/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}


int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter height : ");
    scanf("%f",&fValue1);

    printf("Enter width : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of cricle is : %f",dRet);

    return 0;
}