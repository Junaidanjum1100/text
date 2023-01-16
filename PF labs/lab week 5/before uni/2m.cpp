   // remove data from the array.....
#include<iostream>
#include<string>
using namespace std;
main(){
string arr[15];
int size,index;
cout<<"Enter the size of the string 1----10  ";
cin>>size;
for(int i=0 ;i<size ;i++){
 cout<<"Enter the string "<<i+1<<" ";
 cin>>arr[i];
   }
cout<<"Enter which index you wants to remove ";
cin>>index;
for(int i=index ; i<size ;i++){
      arr[i]= arr[i+1];
      }
    size--;
     
     
for(int i=0; i<size ;i++){
  cout<<arr[i]<<" ";
    }
return 0;
}