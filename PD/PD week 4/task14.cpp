#include<iostream>
#include<stdio.h>
#include<cmath>
#include<stdlib.h>
using namespace std;
void  header();
void printMenu();
void aggregate(string nameStd , int matric_marks , int inter_marks ,int Ecat_marks);
void compare(int ecatMarks1, int ecatMarks2, string nameStd1, string nameStd2);
void remove()
{
  system("pause");
  system("CLS");
}
       
main()
{
 int count;
 int num = 0;
 string nameStd1, nameStd2;
 int matric_marks1, inter_marks1, Ecat_marks1,matric_marks2, inter_marks2, Ecat_marks2;

 while(num < 6)
  {
     system("CLS");
     header();
     printMenu();
     cout<<"Enter Number ";
     cin>>num;
     remove();
   if(num == 1)
    {                                 // recorde of student 1.....
      header();
      count = 1;
      cout<<"Enter your name : ";
      cin>>nameStd1;
      cout<<"Enter your matric marks 1100  ";
      cin>>matric_marks1;
      cout<<"Enter your  First years marks out of 550  ";
      cin>>inter_marks1;
      cout<<"Enter your Ecat marks ";
      cin>>Ecat_marks1;
      remove();
    }
   if(num == 2)
    {                                  // recorde of student 2.........
       header();
      count = 2;
      cout<<"Enter your name : ";
      cin>>nameStd2;
      cout<<"Enter your matric marks 1100    ";
      cin>>matric_marks2;
      cout<<"Enter your  First years marks  550    ";
      cin>>inter_marks2;
      cout<<"Enter your Ecat marks ";
      cin>>Ecat_marks2;
      remove();
    }
   if(num == 3)
    {                              // aggregate of studnet 1..........
       header();
      if(count == 1)
       {
        aggregate(nameStd1 , matric_marks1 , inter_marks1 , Ecat_marks1);         
       }
      else
      {
       cout<<"You do not enter recorde of student 1 "<<endl;
 
      }
       remove();
    }
   if(num == 4)
    {                                   // aggregate of studnet 2...........
       header();
     if(count == 2)
       {                              
        aggregate(nameStd2 , matric_marks2 , inter_marks2 , Ecat_marks2);
    
       }
      else
      {
       cout<<"You do not enter recorde of student 2 "<<endl;
      }
       remove();
    }
   if(num == 5)
    {
      header();
      compare(Ecat_marks1, Ecat_marks2, nameStd1, nameStd2);
      remove();
    }
  }
}
void printMenu()
{
 cout<<"Main menu"<<endl;
 cout<<"------------------------------------"<<endl;
 cout<<"1: Enter recorde Student 1.    "<<endl;
 cout<<"2: Enter recorde Student 2.    "<<endl;
 cout<<"3: Check aggregate Student 1.  "<<endl;
 cout<<"4: Check aggregate Student 2.  "<<endl;
 cout<<"5: check Roll number        :  "<<endl;
 cout<<"6: Exit.                       "<<endl;
}

void header()
{
  cout<<"******************************************"<<endl;
  cout<<"*            University                  *"<<endl;
  cout<<"*         Managemet System               *"<<endl;
  cout<<"******************************************"<<endl;
  cout<<endl;
}
void aggregate(string nameStd ,int matric_marks ,int inter_marks ,int Ecat_marks)
{
 
 float matric_aggregate, inter_aggregate, Ecat_aggregate,matric_percent, inter_percent,Ecat_percent;
 float Total_aggregateSTD;
                        // matric marks aggregate.
 matric_percent= ((matric_marks * 100)/(1100));
 matric_aggregate =  (matric_percent*.30);
                       // inter marks aggreagate.
 inter_percent = ((inter_marks *100)/(550));
 inter_aggregate = (inter_percent * .30);
                       // Ecat marks aggregate.
 Ecat_percent = ((Ecat_marks *100)/(400)); 
 Ecat_aggregate = (Ecat_percent * .40);
 Total_aggregateSTD = matric_aggregate + inter_aggregate + Ecat_aggregate;
 cout<<nameStd <<"   "<<Total_aggregateSTD <<" %"<<endl;
}
void compare(int ecatMarks1, int ecatMarks2, string nameStd1, string nameStd2)
{
  if(ecatMarks2 > ecatMarks1)
  {
    cout<<"Roll no       "<<"Name         "<<endl;
    cout<<"  1           "<<nameStd2<<endl;
  }
  if(ecatMarks2 < ecatMarks1)
  {
    cout<<"Roll no       "<<"Name         "<<endl;
    cout<<"  1           "<<nameStd1<<endl;
  }
}