#include<iostream>
using namespace std;
void myfunction(int a, int b);

main(){
int number, range;
cout<<"Enter the number for multiplies       ";
cin>>number;
cout<<"Enter the range of multiplies        ";
cin>>range;
myfunction(number, range);
}
void myfunction(int a, int b){

int product;
product = a *b;
for(int multiply = product ; multiply>= b ; multiply  =(multiply- b) ){
cout<<multiply<<" ";
}
}