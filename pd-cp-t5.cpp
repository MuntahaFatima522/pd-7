                                    //PD7-CP-T5
#include<iostream>
using namespace std;

bool isPrime(int number);

int main()
{
    int number;
    bool result;
    cout<<"Enter number: ";
    cin>>number;
    if(number<=1)
    {
        cout<<"Error";
    }
    else
    {
        result=isPrime(number);
        cout<<result;
    }
}

bool isPrime(int number)
{
    bool result=true;
    for(int i=2;i<number;i++)
    {
        if(number%i==0)
        {
            result=false;
        }
    }
    return result;
}