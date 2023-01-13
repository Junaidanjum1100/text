#include<iostream>
using namespace std;
bool result(int num);
main()
{
 int num;
 bool istrue;
 while(true)
 {
  cout<<"Enter a number : ";
  cin>>num;
  istrue = result(num);
  if(istrue == true)
    {
     cout<<num<<" symmetrical "<<endl;
    }
  if(istrue == false )
    {
     cout<<num <<"  is not symmetrical "<<endl;
    }
  }
}
bool result(int num)
 {
   int a,b ;
   a = num / 100;
   b = num % 10;
   
  
  if( a == b)
   {
     return true;
   }
  if(a != b)
  {
   return false;
  }
 }
 
 
 