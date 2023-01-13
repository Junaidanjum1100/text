#include<iostream>
#include<cmath>
using namespace std;
string name(int num);    // print number from 11 to 19 in words
string ones(int num);    // print from 1...9
string tens(int ten);    // print 20....99
main()
{
 while(true)
 {
  int num, one, ten;
  string result,result2;
  cout<<"Enter a number  1...10 and 20...99  ";
  cin>>num;
  

  if(num <= 10)
   {
     result = ones(num);
     cout<<result<<endl;
   }
   
   if(num > 19)
     {
       if(num <= 99)
        {
         ten = num / 10;
         one = num % 10;
         result2 = tens( ten);
         result  = ones( one);
         cout<<result2<<" "<<result<<endl;
         }
      } 
  }
}
string ones(int num)
  {
    if(num == 1)
     {
       return " one ";
     }
    if(num == 2)
     {
       return " two ";
     }
     if(num == 3)
     {
       return " three ";
     }
    if(num == 4)
     {
       return " four ";
     }
    if(num == 5)
     {
       return " five ";
     }
    if(num == 6)
     {
       return " six ";
     }
     if(num == 7)
     {
       return " seven ";
     }
     if(num == 8)
     {
       return " eight ";
     }
     if(num == 9)
     {
       return " nine ";
     }
     if(num == 10)
     {
       return "Ten ";
     }
 }
 string tens(int ten)
 {
   if(ten == 1)
    {
      return "Ten";
    }  
    if(ten == 2)
    {
      return "Twenty";
    } 
    if(ten == 3)
    {
      return "Thirty";
    } 
    if(ten == 4)
    {
      return "Forty";
    } 
    if(ten == 5)
    {
      return "Fifty";
    } 
    if(ten == 6)
    {
      return "Sixty";
    } 
    if(ten == 7)
    {
      return "Seventy";
    } 
    if(ten == 8)
    {
      return "Eighty";
    } 
    if(ten == 9)
    {
      return "Ninety";
    }  
 }
