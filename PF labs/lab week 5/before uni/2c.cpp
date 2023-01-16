     //......... find median of the array ..........

#include<iostream>
using namespace std;
main(){
 int size;
float median,array[100];
cout<<"Enter the size of the array  1---100 ";
cin>>size;
for(int i=0 ; i<size ;i++){
 cout<<"Enter the array element ";
  cin>>array[i];
  }
for(int i=0 ; i<size ;i++){
    if(size%2==1)
       median=array[size/2];
   if(size%2==0)
 median = (((array[size/2 -1])+( array[size/2]))/2);
}
cout<<"median of the array "<<endl<<"     "<<median;
return 0;
}