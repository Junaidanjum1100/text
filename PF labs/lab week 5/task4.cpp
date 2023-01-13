#include<iostream>
#include<string>
using namespace std;
string oddish(int num);
main()
{
  int num;
  string result;
  while(true)
  {
   cout<<"Enter a 5 digit number : ";
   cin>>num;
   result = oddish(num);
   if(result == "even")
    {
     cout<<num <<"  is evendish "<<endl<<endl<<endl;
    }
   if(result == "odd")
    {
      cout<<num<<"  is oddish "<<endl<<endl<<endl;
    }
   }
}
string oddish(int num)
 {
  int a, b, c, digit1, digit2, digit3, digit4,digit5,sum;
   digit1 = num % 10;
    a     = num / 10;
   digit2 =  a % 10 ;
    b     =  a / 10 ;
   digit3 = b % 10;
     c    = b /10;
   digit4 = c%10;
   digit5 = c/10;
   sum = digit1 + digit2 + digit3 + digit4 + digit5;
   if( sum % 2 == 0)
     {
       return "even";
     }
   if(sum % 2 == 1)
    {
     return "odd";
    }
  }