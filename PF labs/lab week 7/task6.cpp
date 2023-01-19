#include<iostream>
using namespace std;
int calculateGCD(int num1, int num2);
int calculateLCM(int num1, int num2 , int gcd);
main()
{
 int num1, num2, gcd,result;
 cout<<"Enter the number 1 ";
 cin>>num1;
 cout<<"Enter te number 2  ";
 cin>>num2;
  gcd = calculateGCD(num1, num2);
  
  result = calculateLCM(num1, num2, gcd);
  cout<<"LCM = "<<result;    
}
int calculateGCD(int num1, int num2)
{
    int num,gcd;
    if(num1 >= num2)
    {
     num = num1;
    }
    else
    {
        num = num2;
    }
    
    for(int i = num; i >= 1 ; i--)
    {
        if(num1 % i == 0 && num2 % i== 0 )
        {
            gcd = i;
            break;
        }     
    }
    return gcd;
   
    
}
int calculateLCM(int num1, int num2 , int gcd)
{
   int lcm;
   lcm = (num1 * num2) / (gcd) ;
   return lcm;
}