#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr, int iSize)
{
    T Sum = 0;

    for(int i = 0; i < iSize; i++)
    {
        Sum =Sum + arr[i] ;
    }
    return Sum;
}

int main()
{

    int Arr[] = {10,20,30,40,50};

    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    int iSum = 0;
    iSum = AddN(Arr, 5);
    printf("%d\n",iSum);

    float fSum = 0.0;
    fSum = AddN(brr, 4);
    printf("%f\n",fSum);

    return 0;
}