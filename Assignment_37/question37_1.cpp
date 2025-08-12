#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int size;
    public:
        Array(int value = 10)
        {
            cout<<"Inside Constructor\n";
            this->size = value;
            this->Arr = new int [size];
        }
        Array(Array &ref)
        {
            cout<<"Inside the copy Cnctructor\n";
            this->size = ref.size;
            this->Arr = new int[this->size];

            for(int i = 0; i < size; i++)
            {
                this->Arr[i] = ref.Arr[i];
            }
        }
        ~Array()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;
        }
        inline void Accept();
        inline void Display();
};

void Array::Accept()
{
    cout<<"Please enter the values\n";
    for(int i = 0; i < this->size; i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Element are\n";

    for(int i = 0; i <this->size; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}

class ArrSearch : public Array
{
    public:
        ArrSearch(int no =10) : Array(no)
        {

        }
        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch :: SearchFirst(int value)
{
    int i = 0;
    for(i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }
    if(i == size)
    {
        return -1;
    }
    else
    {
        return i +1;
    }
}

int ArrSearch::Frequency(int value)
{
    int iCnt = 0;

    for(int i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch::SearchLast(int value)
{
    int i = 0;
    int iLast = -1;

    for(i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            iLast = i; 
        }
    }

    if(iLast == -1)
    {
        return -1;
    }
    else
    {
        return iLast + 1; 
    }

}

int ArrSearch::EvenCount()
{
    int iCount = 0;
    for(int i = 0; i <this->size; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int ArrSearch::OddCount()
{
    int iCount = 0;
    for(int i = 0; i <this->size; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int ArrSearch::SumAll()
{
    int iSum = 0;
    for(int i = 0; i <this->size; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    cout<<"Inside min\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iret = sobj1.Frequency(11);

    cout<<"First occurence\n";

    int iRet1 = sobj1.SearchFirst(8);

    cout<<iRet1<<"\n";

    cout<<"Last occurence\n";

    int iRet2 = sobj1.SearchLast(75);

     cout<<iRet2<<"\n";


    cout<<"Even Count\n";

    int iRet3 = sobj1.EvenCount();
    cout<<iRet3<<"\n";

    cout<<"Odd Count\n";

    int iRet4 = sobj1.OddCount();
    cout<<iRet4<<"\n";

    cout<<"Sum of all the elements\n";

    int iRet5 = sobj1.SumAll();
    cout<<iRet5<<"\n";

    return 0;
}