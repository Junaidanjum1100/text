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
    int small=number[0];
    for(int i=0; i<size; i++)
    {
      if(small>number[i])
      {
        small=number[i];
      }
    }
    cout<<small<<endl;
   
   
}