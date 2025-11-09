#include <iostream>
using namespace std;
int main ()
{
	int i,sId[5]={12, 13, 14, 15,16}, sAge[5]={20, 22, 24, 24,28}, option , searchId, searchAge;
	string sName[5]={"A", "B", "C", "15","D"} ,  searchName;
	char sGender[5]={'m', 'm','m', 'f','f'} ,  searchGender;
	bool check=false;

	
			
	
	cout<<" Select any one choice (1/2/3/4) for searching.";
	cout<<"\n1. for ID \n2. for Name\n3. for gender\n4. for age.  ";
	cout<<"\nEnter your choice :  ";
	cin>>option;
	
	switch (option)
	{
		
		case 1:
			
				cout<<"Enter ID of Student "<<" :  ";
				cin>>searchId;
			for(i=0; i<=5; i++)
			{
				for(i=0; i<=5; i++)
				{
					if(searchId==sId[i])
					check=true;
					break;
				}
				break;
			}
				
			
		case 2:
			
				cout<<"Enter Name of Student "<<" :  ";
				cin>>sName[i];
			for(i=0; i<=5; i++)
			{
				for(i=0; i<=5; i++)
					{
						if(searchName==sName[i])
						check=true;
						break;
					}
					break;
			}
		case 3:
				
				cout<<"Enter Gender (m/f) of Student "<<" :  ";
				cin>>sGender[i];
			for(i=0; i<=5; i++)
			{
				for(i=0; i<=5; i++)
					{
						if(searchGender==sGender[i])
						check=true;
						break;
					}
					break;
			}
		case 4:
			
				cout<<"Enter Age of Student "<<" :  ";
				cin>>sAge[i];
			for(i=0; i<=5; i++)
			{
				for(i=0; i<=5; i++)
					{
						if(searchAge==sAge[i])
						check=true;
						break;
					}
					break;
			}

			
		default:
		cout<<"\nStudent does not Exist.";
	}
	
	for(i=0;i<5; i++)
	{
		if(check==true)
		{
		cout<<endl<<sId[i]<<"  "<<sName[i]<<"  "<<sGender[i]<<"  "<<sAge[i]<<"  ";
		break;
		}
		
	}
	
return 0;
}


