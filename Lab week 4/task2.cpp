#include<iostream>
using namespace std;
void showResult(int );
main()
{
  int marks;
  while(true)
  {
   cout<<"Enter your Marks : ";
   cin>>marks;
   showResult(marks);
  }
 
  
}
void showResult(int marks)
{
 if(marks > 50)
  {
    cout<<"Pass "<<endl;
  }
  if(marks < 50)
  {
   cout<<"Fail "<<endl;
  }
  if(marks == 50)
  {
   cout<<"Do more work "<<endl;
  }
}