#include<iostream>
using namespace std;
main()
{
    int result,output;
    
    string color[100];
  int idx=0;
  
   while( true)
   {
    cout<<"Enter color name  ";
    cin>>color[idx];
    idx++;
    cout<<"Enter 1 or exit ";
    cin>>output;
    if(output==1)
    {
        break;
    }
    
   }
  result = (idx * 2) + (idx-1);
  cout<<result;
}