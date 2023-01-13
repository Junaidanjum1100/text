#include<iostream>
using namespace std;
void price(string country_name, float dollar);
main()
{
 string country_name;
 float dollar;
 while(true)
 {
  cout<<"Fist letter capital and other small latter "<<endl;
  cout<<"Enter country name  Pakistan, Ireland, India, England, Canada   "<<endl;
  cin>>country_name;
  cout<<"Enter price in dollar ";
  cin>>dollar;
  price(country_name , dollar);
  
 }
}

void price(string country_name, float dollar)
{
 float discount, total_amount;
 if(country_name == "Pakistan")
  {
   discount = dollar * 0.05;
   total_amount = dollar - discount ;
   cout<<"Total Dollar :"<<total_amount ;
   cout<<endl;
  }
 if(country_name == "Ireland")
  {
   discount = dollar * 0.10;
   total_amount = dollar - discount ;
   cout<<"Total Dollar :"<<total_amount ;
   cout<<endl;
  }
  if(country_name == "India")
  {
   discount = dollar * 0.20;
   total_amount = dollar - discount ;
   cout<<"Total Dollar :"<<total_amount ;
   cout<<endl;
  }
  if(country_name == "England")
  {
   discount = dollar * 0.30;
   total_amount = dollar - discount ;
   cout<<"Total Dollar :"<<total_amount ;
   cout<<endl;
  }

  if(country_name == "Canada")
  {
   discount = dollar * 0.45;
   total_amount = dollar - discount ;
   cout<<"Total Dollar :"<<total_amount ;
   cout<<endl;
  }
}
