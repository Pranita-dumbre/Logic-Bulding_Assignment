#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1<<(iPos1 - 1);
    iMask2 = iMask2<<(iPos2 - 1);

    iResult = iNo & (iMask1 & iMask1);


    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0;
    bool bRet = false;

    cout<<"Enter the value : ";
    cin>>iValue;

    cout<<"Enter the first position : ";
    cin>>iLocation1;

    cout<<"Enter the second position : ";
    cin>>iLocation2;

    bRet =  ChkBit(iValue, iLocation1, iLocation2);

    if(bRet == true)
    {
        cout<<"Bit is ON "<<'\n';
    }
    else
    {
        cout<<"Bit is OFF "<<"\n";
    }

    return 0;
}