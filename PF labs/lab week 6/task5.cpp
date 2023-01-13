#include<iostream>
using namespace std;
float totalIncome(string name, int row, int col);
main()
{
    string name;
    int row, col;
    float result;
    while(true)
    {
        cout<<"Enter type of screen    premiere or normal or discount :  ";
        cin>>name;
        cout<<"Enter number of rows : ";
        cin>>row;
        cout<<"Enter number of coloum : ";
        cin>>col;
        result = totalIncome(name, row, col);
        cout<<"Total income "<<result<<"EUR"<<endl<<endl;
    }
}
   float totalIncome(string name, int row, int col)
   {
    float income;
    if(name == "premiere")
    {
        income = row * col * 12.00;
    }
    else if(name == "normal")
    {
        income = row * col * 7.50;
    }
    else
    {
        income = row * col * 5.00;
    }
    return income;

   } 
