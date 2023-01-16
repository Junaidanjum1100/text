#include<iostream>
using namespace std;
main()
{
int array1[100], array2[100], array3[200];
int num1, num2, even_sum =0, odd_sum=0,sum =0;
cout<<"Enter how many elements you want to enter in 1st array  1---- 100   ";
cin>>num1;
for(int i=0 ;i<num1 ;i++)
 {
 cout<<"Enter array element "<<i+1 <<"  "; 
 cin>>array1[i];
 }
cout<<"How Many elements you wants to enter in 2nd array 1--- 100     ";
cin>>num2;
for(int i=0 ;i<num2 ;i++)
 {
 cout<<"Enter array element "<<i+1 <<"  "; 
 cin>>array2[i];
 }
 
 cout<<"After merging arrays "<<endl;
for(int i=0 ; i<num2 ;i++)
{
 array3[i]= array1[i];
 array3[i+num1] = array2[i];
}
int c , temp ;
c = num1+num2;
for(int i=0; i<c ;i++)
{
 cout<<array3[i]<<" ";
}




 cout<<endl<<endl;
cout<<"\nElements into asscending order "<<endl;                           //converting into asscending order number.
for(int i=0; i<c; i++){
   for(int j=(i+1) ;j<c ; j++){
    if(array3[i]>array3[j]){
       temp = array3[i];
      array3[i] = array3[j];
      array3[j] = temp;
    }
}
}
 for(int i=0; i<c; i++){
  cout<<" "<<array3[i]<<" ";
}   
cout<<endl<<endl;

for(int i =0; i<c ; i++)
{
 sum = sum + array3[i];
 }
cout<<"Total sum of array  = " <<sum<<endl<<endl;
   

    
cout<<"\n \n Even number of array ";
for(int i=0 ; i<c ; i++)
 {
 
   if(array3[i]%2 == 0)
  {
    even_sum  = even_sum +   array3[i];
    cout<<array3[i]<<" ";
}
} 
  cout<<endl<<endl<<"Sum of even numbers  = "<<even_sum<<endl<<endl;
 cout<<"\n \n odd number of array ";
for(int i=0 ; i<c ; i++)
 {
 
   if(array3[i]%2 == 1)
  {
    odd_sum  = odd_sum +   array3[i];
    cout<<array3[i]<<" ";
}
} 
  cout<<endl<<endl<<"Sum of odd numbers  = "<<odd_sum<<endl<<endl;  
return 0;

}