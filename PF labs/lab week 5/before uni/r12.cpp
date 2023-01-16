#include<iostream>
using namespace std;
main(){
int array[5];
int n, sum=0;
cout<<"How many numbers you wants to ender ";
cin>>n;
for(int i=0; i<n; i++){
   cout<<"Enter number "<<i<<" ";
   cin>>array[i];
     }

int even_sum=0;
int odd_sum =0;
for(int j=0 ; j<n; j++){
    if(array[j]%2==0){
     even_sum = even_sum +array[j];
      }
      else
   {
    odd_sum = odd_sum + array[j];
   }

}
cout<<"the sum of even numbers in array  =  "<<even_sum<<endl;
cout<<"the sum of odd numbers in array  =  "<<odd_sum<<endl;
return 0;
}