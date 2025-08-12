#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT ipos1, UINT ipos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;

    iMask1 = 1 << (ipos1 -1 );
    iMask2 = 1 << (ipos2 - 1);

    if((iNo & iMask1) || (iNo & iMask2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0;
    bool bRet = false;

    cout<<"Enter the value : ";
    cin>>iValue;

    cout<<"Enter first position : ";
    cin>>iLocation1;

    cout<<"Enter second position : ";
    cin>>iLocation2;

    bRet =  ChkBit(iValue, iLocation1, iLocation2);

    if(bRet == true)
    {
        cout<<"TRUE \n";
    }
    else
    {
        cout<<"FALSE \n";
    }

    return 0;
}