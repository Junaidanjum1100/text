#include<iostream>
using namespace std;
void upper();
void lower();
main()
{
    upper();
    lower();
}
void upper()
{
    for(int i=1 ; i<=10; i++)
    {
        for(int j=10; j>i ;j--)
        {
            cout<<" ";
        }
        for(int k=1 ; k <= i ; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void lower()
{
    for(int i=1 ; i<=10; i++)
    {
        for(int j=1; j<i ;j++)
        {
            cout<<" ";
        }
        for(int k=10 ; k >= i ; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}