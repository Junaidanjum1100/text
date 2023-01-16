
              // find target of sum by using array ......

#include<iostream>
using namespace std;
main(){
 int arr[10],size,target;
cout<<"Enter your target ";
cin>>target;
cout<<"Enter the size of the array 1.......10  ";
cin>>size;
for(int i=0; i<size ;i++)
{
cout<<"Enter the element "<<i+1<<" ";
cin>>arr[i];
}

for(int i=0 ;i<size; i++){
   for(int j=i+1; j<size ; j++){
     if(arr[i]+arr[j]==target){
   cout<<"The traget palce at"<<endl<<"    "<<"["<<i<<","<<j<<"]";
     break;
      }
  }
 
}

return 0;
}
 