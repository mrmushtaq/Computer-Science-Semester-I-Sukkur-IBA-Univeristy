#include <iostream>
using namespace std;
struct student
{
	int stID;
	double stGpa;
	string stName;
	char stGender;
		
};
int main ()
{
	student s[5];
	for(int i=0; i<5; i++)
	{
	cout<<"Enter ID of student "<<i+1<<" :  ";
	cin>>s[i].stID;
	cout<<"Enter name of student "<<i+1<<" :  ";
	cin>>s[i].stName;
	cout<<"Enter Gender of student "<<i+1<<" :  ";
	cin>>s[i].stGender;
	cout<<"Enter CGPA of student "<<i+1<<" :  ";
	cin>>s[i].stGpa;
	cout<<endl;
	}
		
	cout<<"\nID\tName\tGender\nCGPA\n";
	for(int i=0; i<5; i++)
	{
	cout<<s[i].stID<<"\t"<<s[i].stName<<"\t"<<s[i].stGender<<"\t"<<s[i].stGpa<<endl;
	}	
return 0;
}


