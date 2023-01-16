   // Number is palindrom or not....
#include<iostream>
using namespace std;
main(){
int num,r,sum,temp;
sum=0;
cout<<"Enter a number ";
cin>>num;
temp= num;
if(num<0)
cout<<" ";

for( ; num>0; num=num/10)
     {
    r= num%10;
    sum = (sum *10 )+ r;
     }
 if (sum == temp)
   cout<<"Ture";
 else
  cout<<"False ";


 return 0;
}