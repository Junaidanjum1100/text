#include<iostream>
using namespace std;
string grade( float percentage);
main()
{
    int n=1,marks,  totalMarks=0;
    float percentage;
    string result,name;
    while(true)
    {
        cout<<"Enter the student name :";
        cin>>name;
        while(n<6)
        {
         cout<<"Enter marks subject "<<n <<"  ";
         cin>>marks;
         totalMarks = totalMarks + marks; 
         n++;
        }
        
        percentage = (totalMarks * 100)/ (500); 
        cout<<percentage<<endl;
        cout<<"Student name    Total marks        percentage         Grade    "<<endl;
        cout<<name<<"             "<<totalMarks <<"              "<<percentage  <<"%              ";
        result = grade(percentage);
       cout<<result<<endl<<endl;

    }
    n = 1;
}
string grade( float  percentage)
{
    string ch;
    if(percentage > 90 && percentage <=100)
    {
       ch = "A+"; 
    }
    else if(percentage > 80 && percentage <=90)
    {
       ch = "A"; 
    }
     else if(percentage > 70 && percentage <=80)
    {
       ch = "B+"; 
    }
     else if(percentage > 60 && percentage <=70)
    {
       ch = "B"; 
    }
     else if(percentage > 50 && percentage <=60)
    {
       ch = "c"; 
    }
     else if(percentage > 40 && percentage <=50)
    {
       ch = "D"; 
    }
    else if(percentage < 40)
    {
        ch="F";
    }
     return ch;
}