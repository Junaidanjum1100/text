#include<iostream>
using namespace std;

main()
{
    int size,num;
    string output=" ";
    cout<<"Enter the size of array : ";
    cin>>size;
   
    float number[size];
    for(int index=0; index<size; index++)
    {
        cout<<"Enter number  "<<index+1<<"  ";
        cin>>number[index];
    }
    cout<<"Enter specific number which you want to check  : ";
    cin>>num;
    cout<<endl<<endl;
    for(int index=0; index<size; index++)
    {
      if(number[index]==num)
      {
        output= "Present";
        break;
      }
    }
    if(output=="Present")
    {
        cout<<"Yes number is Present :"<<endl;
    }
    else
    {
     cout<<"NO Present "<<endl;
    }
  
}