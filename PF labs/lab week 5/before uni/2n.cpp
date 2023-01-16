  // delete data from array...

#include<iostream>
using namespace std;
main(){
int array[100],size,index;
cout<<"Enter the size of the array ";
cin>>size;
for(int i=0; i<size; i++){
cout<<"Enter the array elements "<<i+1<<" ";
cin>>array[i];
}
cout<<"Enter index you wants to remove ";
cin>>index;
 while(index>size){
 cout<<"Enter index in range "<<size-1;
 cin>>index;
 }
 cout<<"[";
for(int i=0 ;i<size ;i++){
   if(i!= index)
   cout<<array[i]<<" ";
   else
  cout<<"";
  }
 cout<<"]";
return 0;
}
  
     