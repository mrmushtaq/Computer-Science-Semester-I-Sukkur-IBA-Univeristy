#include <iostream>
using namespace std;

struct Student
{
	int studId[3];
	string studName[3];
	double gpa[3];
	
};

int main ()
{
double searchId, gpaG;
Student s[2];
char input;

for(int i=0;i<2;i++)
{
	for(int j=0;j<3;j++)
	{
	cout<<"\n Enter ID, Name and CGPA \n";
	cin>>s[i].studId[j];
	cin>>s[i].studName[j];
	cin>>s[i].gpa[j];
	}
}
do
{

cout<<"\n Enter GPA Greater than to search \t ";
cin>>gpaG;

for(int i=0;i<2;i++)
{
	for(int j=0;j<3;j++)
	if(s[i].gpa[j]>= gpaG)
	{
	cout<<endl<<s[i].studId[j]<<" "<<s[i].studName[j]<<" "<<s[i].gpa[j];
	}
}
cout<<"\n Wanna continue again";
cin>>input;
}while(input == 'y');
cout<<endl;
system ("pause");
return 0;
}

