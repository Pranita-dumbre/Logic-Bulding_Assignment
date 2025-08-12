#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 1; 
    UINT iResult = 0;

    
    iMask = iMask;
    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the value : ";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Modified value is : "<<iRet<<"\n";

    return 0;

}