#include<iostream>
using namespace std;
main(){
int arr1[10],arr2[10],arr3[20],size1,size2,c;
cout<<"Size of the array 1 ";
cin>>size1;
for(int i=0 ; i<size1 ;i++){
cout<<"Enter the array number "<<i+1<<" ";
cin>>arr1[i];
}

cout<<"Size of the array 2 ";
cin>>size2;
for(int i=0 ; i<size2 ;i++){
cout<<"Enter the array number "<<i+1<<" ";
cin>>arr1[i];
}
cout<<"After marging array "<<endl;
c=size1+size2;
for(int i=0; i<c ;i++){
  arr3[i]= arr2[i];
  arr3[i+size1] = arr1[i];
  }
for(int i=0 ; i<c;i++){
cout<<arr3[i]<<" ";
}
return 0;
}

