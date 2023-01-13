#include<iostream>
using namespace std;
main()
{
int matric_marks, inter_marks, Ecat_marks;
float matric_aggregate, inter_aggregate, Ecat_aggregate, Total_aggregate,matric_percent, inter_percent,Ecat_percent;
cout<<"Enter your matric marks ";
cin>>matric_marks;
cout<<"Enter your  First years marks  ";
cin>>inter_marks;
cout<<"Enter your Ecat marks ";
cin>>Ecat_marks;
                        // matric marks aggregate.
matric_percent= ((matric_marks * 100)/(1100));
matric_aggregate =  (matric_percent*.10);
                       // inter marks aggreagate.
inter_percent = ((inter_marks *100)/(550));
inter_aggregate = (inter_percent * .40);
                       // Ecat marks aggregate.
Ecat_percent = ((Ecat_marks *100)/(400)); 
Ecat_aggregate = (Ecat_percent * .50);
Total_aggregate = matric_aggregate + inter_aggregate + Ecat_aggregate;
cout<<"Your aggregate is = "<<Total_aggregate <<" %";
}