#include<iostream>


using namespace std;

int main ()
{
	int z[3]={1,2,3};
	
	int id[2][3]={{134,223,356},{345,789,678}};
	string name[2][3]={{"Ahmed", "Farhan", "Ayesha"},{"Mehak","Sumeet","M Azan"}};
	/*
	for(int r=0;r<2;r++)
	{
		for(int c=0;c<3;c++)
		{
			cout<<"\n Enter id and name ";
			cin>>id[r][c]>>name[r][c];
			
		}
	}
	*/
	
	cout<<"\n ID : "<<" Name";
	for(int r=0;r<2;r++)
	{
		for(int c=0;c<3;c++)
		{
			
			cout<<endl<<id[r][c]<<" "<<name[r][c];
			
		}
	}

 return 0;
 }

