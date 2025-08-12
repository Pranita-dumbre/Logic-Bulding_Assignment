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
    UINT iValue =0, iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = ToggleBit(iValue, 7);

    cout<<"After toggle 7th bit :\n";
    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}