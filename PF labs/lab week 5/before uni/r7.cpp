#include<iostream>
using namespace std;
 
main()
{
int n;

cout<<"how many number you want to enter 1....20 "<<" ";
cin>>n;
int a[20];
for(int i=0; i<n ; i++){
  cout<<"Enter the number   "<<i<<"  ";
 cin>> a[i];
 }
for(int i=0; i<n; i++){
cout<<a[i]<<" ";
}
cout<<"\n Even elements  ";
for(int i = 0;  i<n ; i++){
   if(a[i]%2 == 0){
      cout<<a[i]<<" ";
}
   } 
cout<<"\n odd elements  ";
for(int i = 0;  i<n ; i++){
   if(a[i]%2 == 1){
      cout<<a[i]<<" ";
   } 
  } 
 
return 0;   
}
