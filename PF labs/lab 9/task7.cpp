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
    int big=number[0];
    for(int i=0; i<size; i++)
    {
      if(big<number[i])
      {
        big=number[i];
      }
    }
    cout<<big<<endl;
   
   
}