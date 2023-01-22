#include<iostream>
using namespace std;

main()
{
    int row,i, j;
    cout<<"Enter the number of rows  ";
    cin>>row;
     
    for( i=1 ; i <= row ; i++)
    {
        for( j=1 ; j <= i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
