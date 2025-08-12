#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT ipos1,UINT ipos2 )
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1 <<(ipos1 -1);
    iMask2 = iMask2 <<(ipos2 -1);

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    iResult = iNo & (iMask1 & iMask2);

    return iResult;
}

int main()
{
   UINT iValue = 0, iRet = 0;

   cout<<"Enter the number : \n";
   cin>>iValue;

   iRet = OffBit(iValue, 7, 10);

   cout<<"After the 7th and 10th bit is off :\n";
   cout<<"Updated number is : "<<iRet<<"\n";

   return 0;
}