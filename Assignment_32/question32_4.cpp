#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT ipos)
{
    UINT iMask = 1; 
    UINT iResult = 0;

    iMask = iMask<<(ipos - 1);
    iMask = iMask;
    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0, iRet = 0;

    cout<<"Enter the value :  ";
    cin>>iValue;

    cout<<"Enter the position : ";
    cin>>iLocation;

    iRet = ToggleBit(iValue, iLocation);

    cout<<"Modified value is : "<<iRet<<"\n";
    
    return 0;
}