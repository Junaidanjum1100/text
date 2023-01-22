#include<iostream>
using namespace std;
void patient(int days);
main()
{
 int days;
 cout<<"Entert the days  : ";
 cin>>days;
 patient(days);

}
void patient(int days)
{
    int a, num, treated=0 , untreated =0,doctor=7;
    for(int i=1 ;i<= days ; i++)
    {
        cout<<"Enter the patient  "<<i<<" ";
        cin>>num;
        if(num <= doctor )
        {
            treated = treated + num;
        }
        else
        {
            
            a = num - doctor;
            treated = treated + (num - a);
            untreated = untreated + a;
            doctor = doctor + 1;
        }

    }
    cout<<"Treated patients  "<<treated<<endl;
    cout<<"Untreated patients "<<untreated <<endl;
}