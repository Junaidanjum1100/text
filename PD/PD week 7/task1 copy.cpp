#include<iostream>
using namespace std;

main()
{
    int row,i, j;
    cout<<"Enter the number of rows  ";
    cin>>row;
     
    for( i=row ; i <= 1 ; i--)
    {
        for( j=row ; j >= i ; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
