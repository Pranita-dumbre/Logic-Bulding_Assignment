#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize)
{
    T Max = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}

int main()
{

    int Arr[] = {10,20,30,4,50};

    float brr[] = {10.0f,3.7f,9.8f,88.7f};

    int iRet = 0;
    iRet = Max(Arr, 5);
    printf("%d\n",iRet);

    float fRet = 0.0;
    fRet = Max(brr, 4);
    printf("%f\n",fRet);

    return 0;
}