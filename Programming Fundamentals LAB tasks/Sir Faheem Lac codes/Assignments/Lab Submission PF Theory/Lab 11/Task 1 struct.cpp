#include <iostream>
using namespace std;
struct student
{
	int ID[5];
	string name[5], department[5], email[5], number[5];	
};
int main ()
{
	student details;
	cout<<"You have to enter record of 5 students.\n\n";
	
	for(int i=0; i<5; i++)
	{
		cout<<"Enter ID of Student "<<i+1<<" : ";
		cin>>details.ID[i];
		
		cin.ignore();
		cout<<"Enter Name of Student "<<i+1<<" : ";
		getline(cin,details.name[i]);
		cout<<"Enter Department of Student "<<i+1<<" : ";
		getline(cin,details.department[i]);
		cout<<"Enter Email of Student "<<i+1<<" : ";
		cin>>details.email[i];
		cout<<"Enter Phone number of Student "<<i+1<<" : ";
		cin>>details.number[i];
		cout<<endl;
	}
	
	cout<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"\nStudent "<<i+1<<" details ";
		cout<<"\nID: "<<details.ID[i];
		cout<<"\nName: "<<details.name[i];
		cout<<"\nDepartment: "<<details.department[i];
		cout<<"\nEmail: "<<details.email[i];
		cout<<"\nPhone number: "<<details.number[i];
		cout<<endl;
	}
	

return 0;
}


