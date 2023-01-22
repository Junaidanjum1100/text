#include<iostream>
using namespace std;

main()
{
    int row,i, j;
    cout<<"Enter the number of rows  ";
    cin>>row;
     
    for( i=row ; i >= 1 ; i--)
    {
        for( j=1 ; j <= i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}