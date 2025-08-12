#include<iostream>
using namespace std;

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    UINT iMask = 1;
    UINT iCount = 0;
    int i = 1;

    while(i <= 32)
    {
        if(iNo & iMask)
        {
            iCount++;
        }
        iMask = iMask << 1;
        i++;
    }
   return iCount;
}
int main()
{
   UINT iValue = 0, iRet = 0;

   cout<<"Enter the value : ";
   cin>>iValue;

    iRet = CountOne(iValue);

   cout<<"On bits are : "<<iRet<<"\n";

   return 0;

}