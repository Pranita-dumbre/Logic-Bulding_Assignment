#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
   int i = 0,iCnt = 0;
   for (i = 0;i<iSize; i++)
   {
       iCnt++;
       if(arr[i] == iNo)
       {
            return iCnt;
       }
   }
}

int main()
{
    
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = 0;
    

    iRet = SearchFirst(Arr,9,40);

    cout<<iRet;

    
    return 0;
}