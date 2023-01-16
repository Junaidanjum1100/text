                         // store data by using vectors...

#include<iostream>
#include<vector>

using namespace std;
void display(vector<int> &v){        // function for display vectors....
for(int i=0; i<v.size(); i++)
{
 cout<<v[i]<<" ";
}
cout<<endl;

}
main()
{
vector<int> val;
int element,size,target;

cout<<"Enter the size of the vector";
cin>>size;
for(int i=0; i<size; i++){
   cout<<"Enter the element "<<i+1<<" ";
   cin>>element;
   val.push_back(element);
}
 val.pop_back(element);                // use of pop_back .. which erase last digit...
display(val);
return 0;
}


