      // progam of finding add 3 numers and sum=0;

#include<iostream>

using namespace std;
main(){
int array[100],size,count;
count=0;

cout<<"Enter the size of the array 3 ---100 ";
cin>>size;

for(int i=0; i<size ;i++){
 cout<<"Enter the array elements only 1 digit "<<i+1<<" ";
 cin>>array[i];
  }
 for(int i=0; i<size; i++){
   for(int j=i+1; i<size ;i++){
      for(int k=i+2; k<size; k++){
          if(array[i]+ array[j]+ array[k] == 0){
             cout<<"["<<array[i]<<","<<array[j]<<","<<array[k]<<"]"<<endl;
              count++;
             }
       }
    }
  }
if(count==0){
   cout<<"[ ]";
    }
return 0;
}
