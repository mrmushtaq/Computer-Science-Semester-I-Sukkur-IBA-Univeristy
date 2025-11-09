#include <iostream>
using namespace std;
int main ()
{
	int size;
	cout<<"input the number of students for which records are to be entered: ";
	cin>>size;
	
	int aPF[size],aMath[size],aEnglish[size],aPS[size],Totalmarks[size];
	string aName[size];
	float percentage[size];
	char grade[size];
	
	cout<<"Enter the names of all students:\n";
	for(int i=0; i<size; i++)
	cin>>aName[i];
		

	for(int i=0; i<size; i++)
	{
		cout<<"Enter marks of Programing of "<<aName[i]<<" : ";
		cin>>aPF[i];	
	}
	
	cout<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<"Enter marks of Math of "<<aName[i]<<" : ";
		cin>>aMath[i];
	}
				
	cout<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<"Enter marks of English of "<<aName[i]<<" : ";
		cin>>aEnglish[i];
	}
	
	cout<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<"Enter marks of PS of "<<aName[i]<<" : ";
		cin>>aPS[i];
			
	}

	for(int i=0; i<size; i++)
	Totalmarks[i]=aPF[i]+aMath[i]+aEnglish[i]+aPS[i];
	cout<<endl;
	
	for(int i=0; i<size; i++)
	percentage[i]=Totalmarks[i]*100.0/400;

	cout<<endl;
	for(int i=0; i<size; i++)
		{
			if(percentage[i]>=80 &&percentage[i]<=100)
			grade[i]='A';
			
			else if(percentage[i]>=70 &&percentage[i]<80)
			grade[i]='B';
			
			else if(percentage[i]>=60 &&percentage[i]<70)
			grade[i]='C';
	
			else if(percentage[i]<60)
			grade[i]='F';
	
		}
				
	for(int i=0; i<=90; i++)
	cout<<"=";

	cout<<endl;
	cout<<"Name\tProgramming    Math     English     P.S     Total Obtained    Percentage     Grade\n";
	
	for(int i=0; i<=90; i++)
	cout<<"=";
	cout<<endl;
	
	for(int i=0; i<size; i++)
	cout<<aName[i]<<"    "<<aPF[i]<<"\t\t  "<<aMath[i]<<"\t     "<<aEnglish[i]<<"\t    "<<aPS[i]<<"\t\t  "<<Totalmarks[i]<<"\t\t"<<percentage[i]<<"\t      "<<grade[i]<<"\n";
	
	for(int i=0; i<=90; i++)
	cout<<"=";
	
return 0;
}


