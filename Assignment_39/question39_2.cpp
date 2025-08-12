#include<iostream>
using namespace std;

template<class T>
int frequency(T *Value, int No1, T iNo2)
{
    int iCount = 0, i = 0;
    for (i = 0; i < No1; i++)
    {
       if(Value[i] == iNo2)
       {
        iCount++;
       }
    } 
    return iCount; 

}

int main()
{
    int i = 0;
    int iValue = 0,iNo = 0;
    int Arr[50];
    int iRet = 0;

    cout<<"Enter number of elements:\n";
    cin>>iValue;

    cout << "Enter the elements:\n";
    for ( i = 0; i < iValue; i++)
    {
        cin>>Arr[i];
    }
    cout<<"Enter the number which count the frequency";
    cin>>iNo;

    
    iRet = frequency(Arr, iValue, iNo);

    cout << "The count of " << iNo << " is: " << iRet;

    return 0;
}