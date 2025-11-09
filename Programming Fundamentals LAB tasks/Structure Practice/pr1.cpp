#include <iostream>
using namespace std;
struct student
{
	int stID;
	string stName;
	char stGender;	
};
int main ()
{
	student s1,s2;
	cout<<"Enter ID of student 1: ";
	cin>>s1.stID;
	cout<<"Enter name of student 1: ";
	cin>>s1.stName;
	cout<<"Enter Gender of student 1: ";
	cin>>s1.stGender;
	cout<<"\nEnter ID of student 2: ";
	cin>>s2.stID;	
	cout<<"Enter name of student 2: ";
	cin>>s2.stName;
	cout<<"Enter Gender of student 2: ";
	cin>>s2.stGender;
	
	cout<<"\nID\tName\t  Gender\n";
	cout<<s1.stID<<"\t"<<s1.stName<<"\t"<<s1.stGender<<"\n";
	cout<<s2.stID<<"\t"<<s2.stName<<"\t"<<s2.stGender<<"\n";
	
return 0;
}


