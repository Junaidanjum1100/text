#include<iostream>
using namespace std;
main()
{
    int size1=2, size2;
   
    cout<<"Enter the size of array 2  : ";
    cin>>size2;
    int array1[size1], array2[size2];
    for(int i=0; i<size1; i++)
    {
        cout<<"Enter the  element of array 1 : " <<i+1<<"  ";
        cin>>array1[i];
    }
    for(int i=0; i<size2; i++)
    {
        cout<<"Enter the elements of array 2  : "<<i+1<<" ";
        cin>>array2[i];
    }
    int c = size1+ size2;
    int arr[c];
    for(int i=0; i<c ; i++)
    {
       arr[0] = array1[0];
       arr[i+1]= array2[i];
       arr[c-1]= array1[1];
    }
    for(int i=0 ; i<c ; i++)
    {
        cout<<arr[i]<<" , ";
    }
}