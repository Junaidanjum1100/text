#include<iostream>
using namespace std;
main(){
 int n,sum=0;
int array[100];
cout<<"how many number you want to enter 1.......100 ";
cin>>n;
for(int i=0 ; i<n ; i++){
     cout<<"enter number "<<i<<" ";
     cin>>array[i];
   }
cout<<"Sum of odd elements "<<endl;
for(int i=0 ; i<n ; i++){
   if(array[i]%2 == 1){
      sum = sum + array[i];
      }
}
cout<<sum<<endl;
return 0;
}

   