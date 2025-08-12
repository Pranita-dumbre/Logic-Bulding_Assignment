#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
   int i = 0,iCnt = 0,iCount = 0;
   for (int i = iSize - 1; i >= 0; i--)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = 0,i = 0;
    

    for(i = 0; i < 9; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";

    cout<<"Reverse :\n";
    Reverse(Arr,9);


    
    return 0;
}