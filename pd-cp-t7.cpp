                                       //PD7-CP-T7
#include<iostream>
using namespace std;

int main()
{
    int days,patients;
    int doctor=7,treated=0,untreated=0;
    cout<<"Enter number of days you visited hospital: ";
    cin>>days;
    for(int i=1;i<=days;i++)
    {
        cout<<"Number of patients who visited hospital on day "<<i<<": ";
        cin>>patients;
        if(i%3==0 && treated<untreated)
        {
            doctor++;
        }
        if(patients<=doctor)
        {
            treated=treated+patients;
        }
        if(patients>doctor)
        {
            treated=treated+doctor;
            untreated=untreated+(patients-doctor);
        }

    }
    cout<<"Treated Patients: "<<treated<<endl;
    cout<<"Untreated Patients: "<<untreated<<endl;
}                           