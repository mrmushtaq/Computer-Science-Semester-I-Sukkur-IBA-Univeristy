

#include <iostream>
using namespace std;
int main()
{
	string name,Father_name, group;
	int seatn,eng,ict,math,phy,prog;
	double obtainm,per;
	cout<<"\n";

cout<<"******************************************************************************"<<endl;
cout<<"\t\t\t\tMarks Certificate"<<endl;
cout<<"******************************************************************************"<<endl<<endl;

cout<<"\t\tBoard of intermediate and Secondary Education Sukkur, Sindh"<<endl<<endl<<endl;

cout<<"\tName:                ";
cin>>name;

cout<<"\tFather's Name:       ";
cin>>Father_name;

cout<<"\tGroup:               ";
cin>>group;

cout<<"\tSeat No:             ";
cin>>seatn;
cout<<"\n\n\n";


cout<<"******************************************************************************"<<endl;
cout<<"*    \t\tSubject\t\ttotal Marks\t\tObtained Marks       *"<<endl;
cout<<"******************************************************************************"<<endl;

cout<<"    \t\tEnglish    \t     100\t\t          ";
cin>>eng;

cout<<"    \t\tICT        \t     100\t\t          ";
cin>>ict;

cout<<"    \t\tMath       \t     100\t\t          ";
cin>>math;

cout<<"    \t\tPhysics    \t     100\t\t          ";
cin>>phy;

cout<<"    \t\tProgramming\t     100\t\t          ";
cin>>prog;

cout<<"\n";
 

obtainm=eng+ict+math+phy+prog;
cout<<"    \t\tTotal Marks  \t      "<<obtainm;

cout<<"\n";
per=(obtainm*100)/500;

cout<<"      \t\tPercentage\t     "<<per<<endl;

if(per>=80&& per<=100)
 {
  cout<<"    \t\tGrade        \t  \tA"<<endl;
  cout<<"    \t\tStatus      \t \tPass";  
 }
   
else if(per>=70&& per<80)
 {

  cout<<"    \t\tGrade      \t    \tB"<<endl;
  cout<<"    \t\tStatus      \t \tPass";  
 }

 
else if(per>=60&& per<70) 
 {
   cout<<"    \t\tGrade       \t   \tC"<<endl;
   cout<<"    \t\tStatus      \t \tPass";
 }

else if(per>=50&& per<60)
 {
 
   cout<<"    \t\tGrade       \t   \tD"<<endl;
   cout<<"    \t\tStatus      \t \tPass";
 }
else if(per<50)
cout<<"    \t\tStatus        \t \tFail"<<endl;

cout<<"\n\n";

return 0;
}
 
