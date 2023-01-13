#include<iostream>
using namespace std;
char calculategrade(int marks);
main()
{
    int marks;
    char result;
    while(true)
    {
     cout<<"Enter you marks ";
     cin>>marks;
     result = calculategrade(marks);
     cout<<"Grade "<<result<<endl;
    }

}
char calculategrade(int marks)
{
    char grade;
    if(marks >=0 && marks < 50)
    {
        grade = 'F';
    }
    else if(marks >= 50 && marks <= 60)
    {
        grade = 'E';
    }
    else if (marks >= 61 && marks <= 70)
    {
        grade = 'D';
    }
    else if (marks >= 71 && marks <= 80)
    {
        grade = 'C';
    }
    else if (marks >= 81 && marks <= 85)
    {
        grade = 'B';
    }
    else  
    {
        grade = 'A';
    }
    return grade;
}