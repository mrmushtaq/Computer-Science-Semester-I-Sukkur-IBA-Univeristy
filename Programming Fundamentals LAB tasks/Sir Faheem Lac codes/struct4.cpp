#include <iostream>
using namespace std;
struct Student
{
	int studId[2];
	string studName[2];	
};

int main ()
{
int searchId;
Student s[2];


for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
	cout<<"\n Enter ID and Name \n";
	cin>>s[i].studId[j];
	cin>>s[i].studName[j];
	}
}

cout<<"\n Enter ID to search \t ";
cin>>searchId;

for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	if(searchId == s[i].studId[j])
	{
	cout<<endl<<s[i].studId[j]<<" "<<s[i].studName[j];
	}
}
cout<<endl;
system ("pause");
return 0;
}

