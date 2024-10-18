                                    //PD7-CP-T3
#include<iostream>
using namespace std;

void amplify(int number);

int main()
{
    int number;
    cout<<"Enter the number to amplify: ";
    cin>>number;
    amplify(number);
}

void amplify(int number)
{
    if(number>=1)
    {
        for(int i=1;i<=number;i++)
        {
            if(i%4!=0)
            {
                cout<<i<<" , ";
            }
            else
            {
                cout<<i*10<<" , ";
            }
        
        }
    }
}