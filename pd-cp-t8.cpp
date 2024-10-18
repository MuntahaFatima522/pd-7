                                        //PD7-CP-T8
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float count,tons;
    float minibus=0,truck=0,train=0;
    float sum;
    float percent_minibus,percent_truck,percent_train;
    float average;
    cout<<"Enter the count of cargo for transportation: ";
    cin>>count;
    for(int i=1;i<=count;i++)
    {
        cout<<"Enter the tonnage of cargo "<<i<<": ";
        cin>>tons;
        if(tons<=3)
        {
            minibus=minibus+tons;
        }
        else if(tons>3 && tons <=11)
        {
            truck=truck+tons;
        }
        else
        {
            train=train+tons;
        }
    }
    sum=minibus+truck+train;
    percent_minibus=(minibus/sum)*100;
    percent_truck=(truck/sum)*100;
    percent_train=(train/sum)*100;
    average=((minibus*200)+(truck*175)+(train*120))/sum;
    cout<<fixed<<setprecision(2)<<average<<endl;
    cout<<fixed<<setprecision(2)<<percent_minibus<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<percent_truck<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<percent_train<<"%"<<endl;
}                                