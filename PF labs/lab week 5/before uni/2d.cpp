  //  find sum and equal to target in array.....
#include<iostream>
using namespace std;
main(){
int array[100],size ,target;
cout<<"Enter the Target ";
cin>>target;
cout<<"Enter the size of the array 1---1000  ";
cin>> size;
for (int i=0 ; i<size ;i++){
   cout<<"Enter the element of array  "<<i+1 <<" ";
   cin>>array[i];
  }
for(int i=0; i<size ;i++){
   for(int j= i+1 ;j<size ;j++){
      if(array[i]+array[j]== target){
        cout<<"["<<i<<","<<j<<"]"<<endl;
    break;
            }
     }
  
 }
return 0;
}
