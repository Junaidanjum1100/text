#include<iostream>
using namespace std;

main(){
 int total_area, wine_area,  needed_wine,workers;
float grapes_permeter_square,total_grapes,wine,total_wine; 
cout<<"Enter total area for production  ";                     // total area of land
cin>>total_area;
cout<<"Enter per meter square wine in kilogram      ";                 // grapes per meter square
cin>> grapes_permeter_square;
cout<<"Enter needed wine in kilogram    ";                         //required wine
cin>>needed_wine;
cout<<"Enter number of workers  ";                              // workers
cin>>workers;
wine_area = (total_area * .40);
total_grapes = (wine_area * grapes_permeter_square);
total_wine = (total_grapes / 2.5);

wine =total_wine - needed_wine;           // wine show the difference between them
if(total_wine >= needed_wine){
         cout<<"Good harvest this year! Total wine: "<<total_wine<<" liters."<<wine<<" liters left->"<<(wine/workers)<<" liters per person";
       }
 else
 cout<<"It will be a tough winter! More "<<(-1*wine)<<"  liters wine needed";
  }
              