#include<iostream>
using namespace std;
main()
{
   int size,count=0;
   cout<<"Enter the size of the array : ";
   cin>>size;
   string array[size];
   for(int idx=0 ; idx<size; idx++)
   {
     cout<<"Enter the string "<<idx+1<<"  ";
     cin>>array[idx];
   }
   string a=array[0];
   for(int idx=0; idx<size; idx++)
   {
    if(array[idx] != a )
    {
        count++;
        break;
    }
   }
   if(count == 1)
   {
    cout<<"false";
   }
   else
   {
    cout<<"True";
   }

}