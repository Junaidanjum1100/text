#include<iostream>
using namespace std;
main(){
int i,j,rows,colm;
 cout<<"Enter number of row you want for pattern ";
 cin>>rows;
cout<<"Enter number of columns for pattern"; 
cin>>colm;
{
cout<<"                         pattern 1                   ";
for(i = 1; i<=rows; i++){
    for(j = colm; j>=1; j--){
    if(j< i || j==i)
   cout<<"*";
   else
cout<<" ";
 }
cout<<endl;
}
}
