#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT ipos1, UINT ipos2)
{
    UINT iMask1 = 1; 
    UINT iMask2 = 1;
    UINT iMask = 1;
    UINT iResult = 0;

    iMask1 = iMask1<<(ipos1 -1);
    iMask2 = iMask2<<(ipos2 -1);

    iMask1 = iMask1 | iMask2;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = ToggleBit(iValue,7,10);

    cout<<"After toggle 7th and 10th bits :\n";
    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}