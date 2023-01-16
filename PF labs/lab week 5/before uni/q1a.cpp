#include<iostream>
using namespace std;
bool isprime(int num);
main(){
int n,result;
cout<<"Enter a number ";
cin>>n;
if(n==1 || n==0)
{
cout<<n << "  is not a prime number ";
}
else if(n!=1 || n!=0)
  {
result = isprime(n);
if(result == 1)
  {
cout<<n<<" is a prime number ";
  }
else
       {
cout<<n << "is not a prime number";
         }
  }
}
bool isprime(int num)
{
 int a=2;
while(a<num)
   {
     if(num % a == 0){
      return 0;
     }
     a++;
   } 
return 1;
 }


