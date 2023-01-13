#include<iostream>
using namespace std;
float lowestPrice(int kilometers , string time );
main()
{
  int kilometers;
  string time;
  float result;
  while(true)
  {
    cout<<"Enter your distance in kilometer  1 .... 5000 : ";
    cin>>kilometers;
    cout<<"Enter time day or night : ";
    cin>>time;
    result = lowestPrice(kilometers , time);
    cout<<result<<endl<<endl;
  }
}
float lowestPrice(int kilometers , string time )
{
   float price;
   if(kilometers < 20)
   {
     if(time == "night")
     {
        price = 0.70 + (0.90 * kilometers) ; 
     }
     else 
     {
        price = 0.70 + (0.79 * kilometers);
     }
   }
   else if(kilometers >=20 && kilometers < 100)
   {
    price = 0.09 * kilometers ;
   }
   else
   {
    price = 0.06 * kilometers; 
   }
   return price;

}