
            //  reverse number...
#include<iostream>
using namespace std;
main(){
int num , reverse,c;
reverse =0;
cout<<"Enter Number for reverse ";
cin>>num;
if(num<=2147483647  || num>=-2147483648){
if(num>0){
while(num>0){
   c= num%10;
   reverse= (reverse*10)+c;
   num= num/10;
}
}
else{
num = num*-1;
while(num>0){
   c= num%10;
   reverse= (reverse*10)+c;
   num= num/10;
}
 reverse =reverse*-1;
}
cout<<reverse;
} 
else{
 cout<<"number is not in range ";
}
return 0;
}