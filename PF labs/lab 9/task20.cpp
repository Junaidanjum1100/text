#include<iostream>
using namespace std;
main()
{
    int size,sum=0;
    cout<<"Enter the number of resisters  : ";
    cin>>size;
    int resistance[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the resistace of resister  "<<i+1<<"   ";
        cin>>resistance[i];
        sum = sum + resistance[i];
    }
    cout<<"Total resistance = "<<sum<<" ohm's "<<endl;

}