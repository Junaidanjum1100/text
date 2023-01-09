#include<iostream>
using namespace std;
float tax(int price,char ch);

main()
{
 int price;
 float taxvehical, finalPrice;
 char ch;
 while(true)
 {
  cout<<"Enter the item price  : ";
  cin>>price;
  cout<<"Enter the first letter of the Vehicle ";
  cin>>ch;
  taxvehical =tax(price , ch);
  finalPrice = taxvehical + price ;
  cout<<"Initiial Price "<<price<<endl;
  cout<<"Tax  of vehical "<<ch<< "  "<<taxvehical<<endl;
  cout<<"Final price "<<finalPrice<<endl;
  
  }
}
float tax(int price,char ch)
 {
    float result;
   if(ch== 'M')
    {
      result = price * .06 ;
       return result;
    }
   if(ch == 'E')
    {
      result = price * .08 ;
       return result;
    }
    if(ch == 'S')
    {
      result = price * .10 ;
       return result;
    }
     if(ch == 'V')
    {
      result = price * .12 ;
       return result;
    }
     if(ch == 'T')
    {
      result = price * .15 ;
       return result;
    }
 }
    
    
  
 