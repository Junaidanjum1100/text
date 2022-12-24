#include<iostream>
using namespace std;
main()
{
string name;
int marks1 ,marks2, marks3,marks4, marks5 ;
float percentage,obtain_sum;
cout<<"Enter you name ";
cin>>name;
cout<<"Enter subject 1 marks : ";
cin>>marks1;
cout<<"Enter sujbect 2 marks : ";
cin>>marks2;
cout<<"Enter sujbect 3 marks : ";
cin>>marks3;
cout<<"Enter subject 4 marks : ";
cin>>marks4;
cout<<"Enter subject 5 marks : ";
cin>>marks5;
obtain_sum = marks1 + marks2 + marks3 + marks4 + marks5;
percentage = (obtain_sum *100) / (500) ;
cout<<"Your Name : "<<name<<endl;
cout<<"Your percentage "<<percentage <<" %";
}
