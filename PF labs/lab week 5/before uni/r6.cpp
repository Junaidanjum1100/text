               //   findig prime number by using function
#include<iostream>
using namespace std;
bool isprime(int n);

main(){
int num,result;
cout<<"Enter a number ";
cin>>num;
result = isprime(num);
if(result== 1)
cout<<"Yes "<<num <<" is prime number";
else
cout<<"No " <<num<<"  is not a prime number ";
}

bool isprime(int n){
int count=0;
 for(int c=1 ; c<=n ; c++){
  if(n%c==0){
  count++;
 }
}
if(count== 2)
return 1;
else 
return 0;
}