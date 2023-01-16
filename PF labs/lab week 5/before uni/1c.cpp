                    // find median..
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
main(){
float array1[50],median,temp,a;
      // error median is not consider as float;
int size1;
 
cout<<"Enter size of the array1   1----50    ";
cin>>size1;
for(int i=0; i<size1; i++){
cout<<"Enter array element "<<i+1<<" ";
cin>>array1[i];
}
for(int i=0;i<size1;i++){
  for(int j=i+1 ;j<size1 ;j++){
    if(array1[i]>array1[j]){
         temp=array1[i];
         array1[i] = array1[j];
         array1[j]=temp;
             }
}
}
if(size1%2==0){
  
   a = array1[size1/2 -1] + array1[size1/2];
   median = a/2;
 
   }
else
{
 median = array1[(size1/2) ];
 }
cout<<"meidan "<<median;
return 0;
}