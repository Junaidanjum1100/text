
   // Number is palandrom or not....
#include<iostream>
using namespace std;
main(){
int n,temp, r,sum;
sum=0;
cout<<"Enter the number ";
cin>>n;
temp=n;
while(n > 0){
 r= n%10;
 sum = (sum*10) + r;
 n = n/10;
}
cout<<sum<<endl;
if(temp == sum)
cout<<"true";
else
cout<<"false";
return 0;
}