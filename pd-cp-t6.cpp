                                        //PD7-CP-T6
#include<iostream>
using namespace std;

int primorial(int number);
bool isPrime(int num);

int main()
{
    int number;
    int result;
    cout<<"Enter number: ";
    cin>>number;
    if(number<=0)
    {
        cout<<"Error";
    }
    else
    {
        result=primorial(number);
        cout<<result;
    }
}                                    


int primorial(int number)
{
    int result=1;
    int num=2;
    int i=1;
    while(i<=number)
    {
        if(isPrime(num))
        {
            result=result*num;
            i++;
        }
        num++;
    }
    return result;
}


bool isPrime(int num)
{
    bool result=true;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            result=false;
        }
    }
    return result;
}
