#include<iostream>
using namespace std;
main(){
int i,j,k;
cout<<"          First pattern       "<<endl;
    for(i =1; i<=5; i++){
  for(j =1; j<=i ; j++){
    cout<<"*";}
    cout<<endl;
   }

cout<<"           Second pattern       "<<endl;

for(i =1; i<=5; i++){
  for(j =5; j>=i ; j--){
    cout<<"*";
}
    cout<<endl;
   }
cout<<"           Third pattern       "<<endl;

for(i =1; i<=5; i++){
  for(k =5; k<=2 ; k--){
     cout<<" ";
     }
        for(j=1; j<=i;j++){
        cout<<"*";
}
   
       
    cout<<endl;
   }
}

     