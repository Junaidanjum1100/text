                  //  merge two arrays 
#include<iostream>
using namespace std;
main(){
int a[10],b[10],c[20];
cout<<"Enter 10 numbers in array 1st "<<endl;
for(int i=0 ; i<10 ; i++){
cin>>a[i];
}
cout<<"Enter  10 numbers in array 2nd  "<<endl;
for(int i=0 ; i<10 ; i++){
cin>>b[i];
}
cout<<"after merging array "<<endl;
for(int i=0; i<10; i++){

  c[i] = a[i];
  c[i+10] = b[i];
}
for(int i=0 ; i<20; i++){
 cout<<c[i]<<" ";
}
return 0;
}