
                         // reverse array and sum .....
#include<iostream>
#include<cmath>
using namespace std;

main(){
int array1[10],array2[10],size1,size2,sum,revers1,revers2;               
revers1=revers2=0;
cout<<"Enter the size of arraies ";
cin>>size1;
  cout<< " Keep in mind element only use 1....9 "<<endl;
{
for( int i=0 ;i<size1; i++){
 cout<<"Enter the element of array 1st "<<i+1<<" "; 
 cin>>array1[i];
 }
for(int i=size1-1; i>=0 ;i--){
  cout<<array1[i]<<" ";
      revers1 = (revers1*10) + array1[i];
  }
cout<<revers1<<endl;
}
cout<<"Enter the size of array 2nd ";
cin>>size2;
{
for( int i=0 ;i<size2; i++){
 cout<<"Enter the element of array 2nd  "<<i+1<<" "; 
 cin>>array2[i];
 }

for(int i=size2-1; i>=0 ;i--){
   cout<<array2[i]<<" ";
      revers2 = (revers2*10) + array2[i];
  }
cout<<revers2<<endl;
}
sum = revers1 + revers2;
cout<<"Sum  "<<sum;
return 0;
}