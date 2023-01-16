#include<iostream>
using namespace std;
main(){ 
int num1,num2,temp=0, sum=0;
int a[100], b[100],c[200],even[200],odd[200];
cout<<"How hany number you wants to enter in first array  1...100 ";
cin>>num1;
for(int i =0; i<num1 ; i++){
  cout<<"Enter number is 1st array "<<i<<" ";                             // enter numbers in  1st array according to user
  cin>>a[i];
   }
cout<<"how many number you wants to enter i second array 1...100 ";           // enter number in 2nd array according to user.
cin>>num2;
for(int i= 0; i<num2; i++){
 cout<<"Enter nuber in 2nd array "<<i<<" ";
 cin>>b[i];
}
for(int i=0; i<num2 ; i++){
  c[i] = a[i];
  c[i+num1] = b[i];
  }
cout<<"After merging both arrays "<<endl;                                // merging two array into one array.
 int x;
x= num1 + num2;
for(int i=0 ;i<x ; i++){
 cout<<c[i] <<" ";
}
cout<<endl<<endl;
cout<<"\nElements into asscending order "<<endl;                           //converting into asscending order number.
for(int i=0; i<x; i++){
   for(int j=(i+1) ;j<x ; j++){
    if(c[i]>c[j]){
       temp = c[i];
      c[i] = c[j];
      c[j] = temp;
    }
}
}
 for(int i=0; i<x; i++){
  cout<<" "<<c[i]<<" ";
}
cout<<endl<<endl;
cout<<"\n Elements into deasscending order "<<endl;
                                                                // converting into deasscending order numbers.
for(int i=0; i<x; i++){
   for(int j=(i+1) ;j<x ; j++){
    if(c[i]<c[j]){
       temp = c[i];
      c[i] = c[j];
      c[j] = temp;
    }
}
}
 for(int i=0; i<x; i++){
  cout<<" "<<c[i]<<" ";
}
cout<<endl<<endl;
for(int i=0 ; i<x ; i++){
      sum= sum +c[i];
   }
cout<<endl;
 cout<<"\n Total sum of the array number is "<<"=  " <<sum;


                               /* Note for finding even and odd number from a array we can use save array for output 
                                   if we use other array then firs store data in  other array then output */
cout<<"\n Even elements in array "<<endl;                              // even elements in array.

for(int i=0; i<x ; i++){
     if(c[i]%2 == 0){
       cout<<c[i]<<" ";
      }
           }

cout<<"\n odd elements in array "<<endl;                              // odd elements in array.

for(int i=0; i<x ; i++){
     if(c[i]%2 == 1){
       cout<<c[i]<<" ";
  }
}

return 0;
} 
