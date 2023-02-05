#include<iostream>
using namespace std;
main()
{
    int size=4;
    float amount,sum=0;
    int arr[size];
    cout<<"Enter the array element has a sequence  : "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the amount of its :  "<<i+1<<"   ";
        cin>>arr[i];
    }
    cout<<"Enter the item amount  : ";
    cin>>amount;
   sum = ((arr[0] * .25) + (arr[1] * .10)+ (arr[2] * .05) +(arr[3] * .01) );
    
    if(sum >= amount)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

}