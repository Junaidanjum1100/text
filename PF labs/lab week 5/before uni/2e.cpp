   // program for counting number of character use in string wiht out repeating..
#include<iostream>
#include<vector>
using namespace std;
main(){
 vector<int> dict(256,-1);
 string s;
 int maxlen=0,start =0;
cout<<"Enter a string ";
cin>>s;
for(int i=0 ;i<s.size() ;i++){
     if(dict[s[i]] > start)
       start = dict[s[i]];
       dict[s[i]] = i;
        maxlen= max(maxlen , i-start);
      }
 cout<<maxlen;
 return 0;
}
  