#include <iostream>
using namespace std;
struct product
{
	string Pname;
	int Pid,Pprice;
};
struct shop
{
	string Sname, Sadd;
	int Sid;
	product p;	
};

int main ()
{
	int ask;
	cout<<"How many shops do you have ? ";
	cin>>Sask;
	cout<<"How many Products do you have in each shop ? ";
	cin>>Pask;	
	shop s[Sask];
	
	for(int i=0; i<Sask; i++)
	{
		cout<<"Enter ID of Shop "<<i+1<<" :  ";
		cin>>Sid[i];
		cout<<"Enter name of Shop "<<i+1<<" : ";
		cin>>Sname[i];
		cout<<"Enter Address of Shop "<<i+1<<" : ";
		cin>>Sadd[i];
		for(int j=0; j<Pask; j++)
		{
		cout<<"Enter ID of Product "<<j+1<<" :  ";
		cin>>p[i].;
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


