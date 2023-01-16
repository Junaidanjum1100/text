#include<iostream>
using namespace std;
main(){
long number, thousand, thousand_mod, hund, hund_mod, ten, one;

string ones[]  = { "Zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven" , "twelve", "thirteen", "fourteen", "fifteen" , "sixteen", "seventeen" , "eighteen", "nineteen"};
 
string tens[8] = { "twenty", "thirty", "forty", "fifty", "sixty" , "seventy", "eighty", "ninety"};
cout<<"Enter a number:"<<endl;
cin>>number;
if(number >= 1 && number<= 19)
{
 cout<<"Number you have entered is:"<<ones[number]<<endl;
}
else if (number >=20 && number <=99)
{
 ten = number / 10;
one = number % 10;
cout<<"Number you have enter is :"<<endl;
cout<<tens[ten-2]<<" "<<ones[one]<<endl;
}
else
cout<<"Number is greater than 99";
}