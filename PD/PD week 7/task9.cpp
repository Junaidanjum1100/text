#include<iostream>
using namespace std;
void pattern(int row);
main()
{
    int row;
    cout<<"Enter the number of rows : ";
    cin>>row;
    pattern(row);
}
void pattern(int row)
{
    int i, j, k,m,l;
    for(i=1; i<= row ;i++)
    {
        for(j=1 ;j<=i;j++)
        {
            cout<<"*";
        }
        for(k=row; k>i ;k--)
        {
            cout<<" ";
        }
        for(m = row; m>i; m--)
        {
            cout<<" ";
        }
        for(l = 1 ;l<= i; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}