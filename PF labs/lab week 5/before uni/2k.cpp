
                            // convert interger to roman 1----999
#include<iostream>
#include<string>
using namespace std;
main(){
 int num, ones ,tens, hund, hund_mod, thousand, thou_mod ;
 string one[] = { "","I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX"};
 string ten[] = {"","","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
 string hunds[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
 
cout<<"Enter a number ";
cin>>num;
if(num>=1 && num<=19){                                      //convert numbers from 1----19
  
    cout<< num <<" convert into roman "<<one[num]<<endl;
}
if(num>=20 && num<=99){
     tens= num/10;
     ones= num%10;
     cout<<num<<"convert into Roman "<<ten[tens]<<one[ones]<<endl;
    }
 else if(num>=100 && num<=999){
     hund = num/100;
     hund_mod= num%100;
     tens= hund_mod /10;
     ones= hund_mod%10;
    cout<<num<<" convert into roman "<<hunds[hund]<<" "<<ten[tens]<<" "<<one[ones]<<endl;
  }
 else
cout<<"number is greater the 999 "<<endl;    

return 0;
}
         