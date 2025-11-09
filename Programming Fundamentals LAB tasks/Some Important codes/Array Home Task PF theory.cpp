#include <iostream>
using namespace std;
int main ()
{
	int i,sId[30], sAge[30];
	string sName[30];
	char sGender[30];
	
	for (i=0; i<30; i++)
	{
		cout<<"Enter ID of Student "<<i+1<<" :  ";
		cin>>sId[i];
		
		cout<<"Enter Name of Student "<<i+1<<" :  ";
		cin>>sName[i];
		
		cout<<"Enter Gender (m/f) of Student "<<i+1<<" :  ";
		cin>>sGender[i];
		
		cout<<"Enter Age of Student "<<i+1<<" :  ";
		cin>>sAge[i];
		
		cout<<endl;		
	}
	
	for(i=0; i<30; i++)
	cout<<endl<<sId[i]<<"  "<<sName[i]<<"  "<<sGender[i]<<"  "<<sAge[i]<<"  ";


return 0;
}


