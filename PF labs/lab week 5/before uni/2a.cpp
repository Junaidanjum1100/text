     //  program for reverse arraies and find sum...
#include<iostream>
using namespace std;
main(){
int array1[10],array2[10],size1,size2,sum,sum1,sum2;
sum=sum1=sum2=0;
cout<<"Enter the size of the 1st array  1---10  and size of array 2nd   ";
cin>>size1>>size2;
cout<<"\n Note every element should be between 0---9"<<endl;
for(int i=0 ;i<size1 ; i++){
   cout<<"Enter element of first array "<<i+1 <<" ";
   cin>>array1[i];
           }
 for(int i=size1-1 ;i>= 0; i--)   // reverse sum of first array...
   sum1= (sum1 *10)+array1[i];

 for(int i=0 ;i<size2 ; i++){
   cout<<"Enter element of second array "<<i+1 <<" ";
   cin>>array2[i];
  } 
 for(int i=size2-1 ;i>=0 ;i--)       // reverse sum of secodn array....
   sum2= (sum2*10)+array2[i];
     
sum = sum1+sum2;
cout<<" After reverse Sum = "<<sum;
return 0;
}