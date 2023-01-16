#include<iostream>

using namespace std;
int main()
{
 int size, array[100];
cout<<"Enter the size of the array ";
cin>>size;
for(int i=0; i<size ;i++)
{
 cout<<"Enter the array element "<<i<<" ";
 cin>>array[i];
}
cout<<"Display all elements of array ";
for(int i=0 ; i<size ;i++){
 cout<<array[i]<<" ";
}
int 