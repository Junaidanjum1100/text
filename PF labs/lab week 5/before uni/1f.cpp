
      //find number of characters use in string without repeating.
#include<iostream>
#include<vector>
using namespace std;
main(){
vector<int> dict(256,-1);
string s;
cout<<"Enter a  string ";
cin>>s;
int maxlen=0, start=-1;
for( int i=0 ; i<s.size(); i++){
   if(dict[s[i]] > start)
    start=dict[s[i]];
    dict[s[i]]= i;
   maxlen= max(maxlen,i-start);
  }
cout<<maxlen;
return 0;
}