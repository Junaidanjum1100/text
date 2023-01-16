// This


#include<iostream> //this program is about calculating merit of UET
using namespace std;
float aggregate(int matric_marks ,int inter_marks, int ECAT_marks);
main(){
int matric_marks,inter_marks,ECAT_marks;
float result;
cout<<"Enter your marks in matric ";
cin>>matric_marks;
cout<<"Enter your marks in Intermadiate Part I only ";
cin>>inter_marks;
cout<<"Enter your marks in ECAT ";
cin>>ECAT_marks;
result = aggregate(matric_marks,inter_marks,ECAT_marks);
cout<<"Your aggregate "<<result;
}
float aggregate(int matric_marks ,int inter_marks, int ECAT_marks)
{
float per_matric,per_inter,per_ECAT,total_per;
per_matric = (matric_marks *100 *.25)/1100; //calculate 25% matric
per_inter = (inter_marks *100 *.45)/550;   // calculate 45% inter
per_ECAT = (ECAT_marks *100 * .30)/400;    // calculate 30% ECAT
total_per = per_matric + per_inter + per_ECAT ;
return total_per;
}