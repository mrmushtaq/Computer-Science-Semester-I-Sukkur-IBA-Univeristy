#include <iostream>
using namespace std;

struct Student
{
	int studId;
	string studName;
	
}s3,s4;

int main ()
{
int a = 10,b;
b=a;

Student s1={1,"Israr"},s2={2,"Ayesha"};
s3.studId = 3;
s3.studName = "Farhan";

cout<<"\n ID : "<<s1.studId;
cout<<"\n Name : "<<s1.studName;

cout<<"\n ID : "<<s2.studId;
cout<<"\n Name : "<<s2.studName;

cout<<"\n ID : "<<s3.studId;
cout<<"\n Name : "<<s3.studName;

s4=s1;

cout<<"\n ID : "<<s4.studId;
cout<<"\n Name : "<<s4.studName;

s4 = s3;
cout<<"\n ID : "<<s4.studId;
cout<<"\n Name : "<<s4.studName;


cout<<endl;
system ("pause");
return 0;
}

