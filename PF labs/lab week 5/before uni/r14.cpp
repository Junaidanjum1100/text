#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
for(int i=0; i<v.size() ;i++){
   cout<<v[i] <<" " ;
}
cout<<endl;
cout<<"Find the target "<<endl;
int target ;
cout<<"Enter the target  ";
cin>>target;
for(int i=0 ;i<v.size() ;i++){
     for(int j=(i+1) ;j<v.size() ;j++)
         {
     if(v[i] +v[j] == target ){
          cout<<v[i]<<" "<<v[j];     
}}}}

int main()
{
vector<int> vec1;
int size,element;
cout<<"Enter the size of the vector ";
cin>>size;
for(int i=0 ; i<size ; i++){
cout<<"Enter an element to add to this vector  ";
cin>>element;
vec1.push_back(element);
}
display(vec1);
return 0;
}