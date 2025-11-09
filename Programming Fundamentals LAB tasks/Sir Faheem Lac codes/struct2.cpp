#include <iostream>
using namespace std;

struct Student
{
	int studId;
	string studName;
	
};

int main ()
{

Student s[2];


for(int i=0;i<2;i++)
{
	cout<<"\n Enter ID and Name";
	cin>>s[i].studId;
	cin>>s[i].studName;
}

for(int i=0;i<2;i++)
{
	cout<<endl<<s[i].studId<<" "<<s[i].studName;
}
cout<<endl;
system ("pause");
return 0;
}

