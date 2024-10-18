                                    //PD7-CP-T4
#include<iostream>
using namespace std;

int triangle(int number);

int main()
{
    int number;
    int dots;
    cout<<"Enter the number of triangle: ";
    cin>>number;
    dots=triangle(number);
    cout<<"Dots in the triangle: "<<dots;
}

int triangle(int number)
{
    int dots=0;
    int n1,n2;
    for(int i=1;i<=number;i++)
    {
        n1=dots;
        n2=i;
        dots=n1+n2;
    }
    return dots;
}