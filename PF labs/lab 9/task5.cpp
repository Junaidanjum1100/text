#include<iostream>
using namespace std;

main()
{
    int size,num;
    
    cout<<"Enter the size of array : ";
    cin>>size;
   
    float number[size];
    for(int index=0; index<size; index++)
    {
        cout<<"Enter number  "<<index+1<<"  ";
        cin>>number[index];
    }
    cout<<"Enter the number for product with array  :  ";
    cin>>num;
    for(int index=size-1; index>=0; index--)
    {
        cout<<number[index] * num <<"  ";
    }
   
}