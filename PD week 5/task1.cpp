#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
float pyramidVolume(float length, float width, float height, string name);
main()
{
  while(true)
  {
    float length, width, height,output;
    string name;
    cout<<"Enter length in meter : ";
    cin>> length;
    cout<<"Enter Width in meter  : ";
    cin>>width;
    cout<<"Enter height in meter : ";
    cin>>height;
    cout<<"Enter unit you want to change value  : "<<endl;
    cout<<" Enter centimeters , kilometers and millimeters   :  ";
    cin>>name;
    output = pyramidVolume(length, width, height, name);
    cout<<" \" "<<output<<" cubic "<<name <<"\" "<<endl;
  }
}
float pyramidVolume(float length, float width, float height, string name)
 {
   float result;
   float volume;
   volume = (length * width * height)/ (3);
   if(name == "centimeters")
    {
      result = (volume) * (pow(10, 6));
       return result;
    }
   if(name == "kilometers")
    {
      result = (volume) / (pow(10,9));
       return result;
    }
   if(name == "millimeters")
    {
     result = (volume) * (pow (10,9));
     return result;
    }

 } 
    
    