#include<iostream>
using namespace std;
int sum=0;
main(){
int num;
int array[100];
for(int i=0; i<5 ; i++){
cout<<"Enter numbers "<<i<<" ";
cin>>array[i];
}
cout<<"\n even elements  "<<endl;
for(int i=0; i<5 ; i++){
if(array[i]%2 == 0){
      cout<<array[i]<<" ";
}
}
cout<<"\n odd elements  "<<endl;
for(int i=0; i<5 ; i++){
if(array[i]%2 == 1){
      cout<<array[i]<<" ";
}
}
return 0;
}

