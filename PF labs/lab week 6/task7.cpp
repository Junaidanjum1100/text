#include<iostream>
using namespace std;
float price(string product, string city, int num);

main()
{
    string product , city;
    int num;
    float result;
    while(true)
    {
        cout<<"Enter the name of the product  : ";
        cin>>product;
        cout<<"Enter name of city (Sofia or Plovdlv or Varna ) : ";
        cin>>city;
        cout<<"Enter the number of the product : ";
        cin>>num;
        result = price(product , city, num);
        cout<<"Total cost : "<<result<<endl<<endl;
    }
}
   float price(string product, string city, int num)
   {
    float result;
    if(city == "Sofia")
    {
        if(product == "coffe")
        {
            result = num * .50;
        }
        
       else  if(product == "water")
        {
            result = num * .80;
        }
          
       else  if(product == "beer")
        {
            result = num * 1.20;
        }
          
       else  if(product == "sweets")
        {
            result = num * 1.45;
        } 
        else if(product == "peanuts")
        {
            result = num * 1.60;
        }
        else
        {
            result = 0;
        }
    }
    
    else if(city == "Plovdiv")
    {
        if(product == "coffe")
        {
            result = num * .40;
        }
        
       else  if(product == "water")
        {
            result = num * .70;
        }
          
       else  if(product == "beer")
        {
            result = num * 1.15;
        }
          
       else  if(product == "sweets")
        {
            result = num * 1.30;
        } 
        else if(product == "peanuts")
        {
            result = num * 1.50;
        }
        else
        {
            result = 0;
        }
    }
     else if(city == "Plovdiv")
    {
        if(product == "coffe")
        {
            result = num * .45;
        }
        
       else  if(product == "water")
        {
            result = num * .70;
        }
          
       else  if(product == "beer")
        {
            result = num * 1.10;
        }
          
       else  if(product == "sweets")
        {
            result = num * 1.35;
        } 
        else if(product == "peanuts")
        {
            result = num * 1.55;
        }
        else
        {
            result = 0;
        }
    }
    else
    {
        result = 0;
    }
    return result;
   }