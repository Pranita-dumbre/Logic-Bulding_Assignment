#include<iostream>
using namespace std;

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CHKBit(UINT iNo, UINT ipos)
{
    UINT iMask = 1;

    if(ipos < 1 || ipos > 32)
    {
        return false;
    }

    iMask = 1 << (ipos - 1);

    if(iNo & iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iValue;

    cout<<"Enter the position : ";
    cin>>iLocation;

    bRet = CHKBit(iValue, iLocation);

    if (bRet == true)
    {
        cout<<"Bit is ON\n"; 
    }
    else 
    {
        cout<<"Bit is OFF\n ";
    }    
}