# include <iostream>


using namespace std;

int main()
{

	int i,id[3]={1,2,3},searchID,option;
	string name[3]={"A","B","C"}, searchName;
	char gender[3]={'m','f','m'};
	bool check=false;
	
	cout<<"\n Press 1 to search with ID : ";
	cout<<"\n Press 2 to search with Name : ";
	cout<<"\n Enter Option : ";
	cin>>option;
	
	if(option == 1)
	{	
	cout<<"\n Enter id to search : ";
	cin>>searchID;
	
	for(i=0;i<3;i++)
	{
		if(searchID == id[i])
		{
			check = true;
			break;
			//cout<<endl<<id[i]<<" "<<name[i]<<" "<<gender[i]<<endl;	
		}
		
	}
	}
	else if (option == 2)
	{	
	cout<<"\n Enter name to search : ";
	cin>>searchName;
	
	for(i=0;i<3;i++)
	{
		if(searchName == name[i])
		{
			check = true;
			break;
			//cout<<endl<<id[i]<<" "<<name[i]<<" "<<gender[i]<<endl;	
		}
		
	}
	
	}

	
	
	
	if(check == true)
		{
		cout<<endl<<id[i]<<" "<<name[i]<<" "<<gender[i]<<endl;
		}
	else
		cout<<"Student doesnot exist";
	return 0;
}

