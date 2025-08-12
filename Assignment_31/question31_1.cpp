#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT ipos)
{
    UINT iMask = 1; 
    UINT iResult = 0;

    iMask = iMask <<(ipos -1);
    iMask = ~iMask;
    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = OffBit(iValue, 7);

    cout<<"After the 7th bit is off :\n";
    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}