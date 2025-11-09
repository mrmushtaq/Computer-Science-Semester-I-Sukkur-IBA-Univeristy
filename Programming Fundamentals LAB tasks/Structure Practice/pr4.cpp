#include <iostream>
using namespace std;
struct student
{
	int stID[3];
	double stGpa[3];
	string stName[3];
	char stGender[3];
		
};

int main ()
{
	int searchID;
	student s[3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
		cout<<"Enter ID of student "<<j+1<<" :  ";
		cin>>s[i].stID[j];
		cout<<"Enter name of student "<<j+1<<" :  ";
		cin>>s[i].stName[j];
		cout<<"Enter Gender of student "<<j+1<<" :  ";
		cin>>s[i].stGender[j];
		cout<<"Enter CGPA of student "<<j+1<<" :  ";
		cin>>s[i].stGpa[j];
		cout<<endl;
		}

	}
		
	cout<<"\nEnter search ID to search\n";
	cin>>searchID;
	cout<<"ID\tName\tGender\tCGPA"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		if(searchID==s[i].stID[j])
		{
		cout<<s[i].stID[j]<<"\t"<<s[i].stName[j]<<"\t"<<s[i].stGender[j]<<"\t"<<s[i].stGpa[j]<<endl;
		}

	}
	return 0;
}


