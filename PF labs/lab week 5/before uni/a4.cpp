           // convert numbers into words;

#include<iostream>
using namespace std;
main(){
  long number,one,ten;
  string ones[]= {"zero","one","two","three","four","five","six","seven","eight","nine",
"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
"eighteen","nineteen"};
 string tens[] = {"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

cout<<"Enter a interger number for change into word  "<<endl;
cin>>number;
if(number>=0 && number<=19){
        cout<<"your required number is   "<<ones[number]<<endl;
  }
if(number>=20 && number <= 99){
  ten = number/10;
  one = number % 10;
  cout<<"Your required number is " <<tens[ten-2]<<" "<<ones[one];
      }
       
return 0;
}