          // about Array
#include<iostream>
using namespace std;
main(){
 int n,sum;
sum=0;
cout<<"How many number you wants to inter in a array"<<endl;
cin>>n;
int array[n];
           
            // store numbers in array.

cout<<"Enter numbers "<<endl;
for(int i=0 ; i<n ; i++){
 cin>>array[i];
}
             // sorting number from the array.

cout<<"\n array elements "<<endl;
for(int i=0 ; i<n ; i++){
 cout<<array[i]<<"  ";
}
cout<<endl<<endl;
            // finding sum and average by using array.
        
for(int k=0 ; k<n ; k++){
sum = sum + array[k];
}
float average;
average = sum/n;
cout<<"sum of array  "<<sum<<endl;
cout<<"average  "<<average;
cout".......................................................................................................
............................................................................................................
........................................................................."


}