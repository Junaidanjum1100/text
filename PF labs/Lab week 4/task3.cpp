#include<iostream>
using namespace std;
void isEligible(int age);
main()
{
 int age;
 while(true)
 {
   cout<<"Enter you age ";
   cin>>age;
   isEligible(age);
 }
 
}
void isEligible(int age)
{
 if(age >= 18)
 {
  cout<<"Yes you are Eligible to vote "<<endl;
 }
 if(age < 18)
 {
  cout<<"No you are not Eligible to vote "<<endl;
 }
}