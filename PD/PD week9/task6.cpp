#include<iostream>
using namespace std;
main()
{
    int size,transformation,result;
    cout<<"Enter how many number for wants to enter : ";
    cin>>size;
    int array[size];
    for(int idx=0 ; idx<size; idx++)
    {
        cout<<"Enter the element "<<idx+1<<"   ";
        cin>>array[idx];
    }
    cout<<endl;
    cout<<"Enter Transformation : ";
    cin>>transformation;
    cout<<"[";
    for(int idx=0; idx<size; idx++)
    {
        if(array[idx]%2 == 0)
        {
            result = array[idx] - (2 * transformation);
            cout<<result<<" , "; 
        }
        else{
            result= array[idx] + (2 * transformation);
            cout<<result<<" , ";
        }
    }
    cout<<" ]";
}