#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask<< (iPos - 1);
    iMask = ~iMask;
    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0, iRet = 0;
    
    cout<<"Enter the number : ";
    cin>>iValue;

    cout<<"Enter the position : ";
    cin>>iLocation;

    iRet = OffBit(iValue, iLocation);

    cout<<"Modfied value are : "<<iRet<<"\n";

    return 0;
}