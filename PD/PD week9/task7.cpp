#include<iostream>
using namespace std;
main()
{
    string word1, word2;
    int length1, length2,count=0;


    cout<<"Enter the string 1 ";
    getline(cin,word1);
    length1=word1.length();
    cout<<"Enter the string 2 ";
    getline(cin,word2);
    length2=word2.length();
    for(int idx=0; idx<length1 ; idx++)
    {
      for(int idx=0; idx<length2; idx++)
      {
        if(word1[idx] ==word2[idx] )
        {
            count++;
            word2[idx]=24;
            break;
        }
      }
    }
    cout<<count;


    
}