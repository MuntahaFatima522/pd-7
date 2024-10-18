                                        //PD7-OP-T2
#include<iostream>
using namespace std;

void printDiamond1(int rowSize);
void printDiamond2(int rowSize);

int main()
{
    int rowSize;
    cout<<"Enter desired number of rows: ";
    cin>>rowSize;
    rowSize=rowSize/2;
    printDiamond1(rowSize);
    printDiamond2(rowSize);
}

void printDiamond1(int rowSize)
{
   
     for(int row=1;row<=rowSize;row++)
    {
        for(int space=1;space<=rowSize-row;space++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
      
    }
}

void printDiamond2(int rowSize)
{
    for(int row=rowSize;row>=1;row--)
    {
        for(int space=1;space<=rowSize-row;space++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}