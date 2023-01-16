#include<iostream>
using namespace std;
main(){
float budget,use_bud;
string season;
cout<<"Enter you budget in BNG Bulgarian levs  in range of 10.00 .... 5000.00  ";
cin>>budget;
cout<<"Enter the season for journey summer or winter  ";
cin>>season;
if(season =="Summer" || season =="summer" || season == "winter" || season == "Winter"){
if(budget <= 100){
     if(season =="summer" || season == "Summer"){
                   use_bud = budget *.30;
                   
                    cout<<"somewhere in Bulgaria"<<endl<<"Camp - "<<use_bud;
                    }
             else
                {
             use_bud = budget * .70;
           cout<<"somewhere in Bulgaria"<<endl<<"Hotel - " <<use_bud;
             }
           }
else if(budget >100 && budget <= 1000){
                     if(season == "summer" || season == "Summer"){
                         use_bud = budget * .40;
                        cout<<"somewhere in Balkans "<<endl<<"Camp - "<<use_bud;
                          }
                    else
                     {
                         use_bud = budget * .80;
                       cout<<"somewhere in Balkans "<<endl<<"Hotel -"<<use_bud;
                     }
       }
  else
     {
                    use_bud = budget * .90;
       cout<<"somewhere in Balkans "<<endl<<"Hotel -" <<use_bud;
   }
}
else
 {
  cout<<"Please enter season summer or winter ";
 }
}

           