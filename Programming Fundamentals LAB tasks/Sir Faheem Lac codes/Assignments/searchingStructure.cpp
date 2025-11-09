#include<iostream>
using namespace std;

struct Shop
{
	int ShopID;
	string ShopName;
	string ShopAdd;
	string ShopCity;
		
};
int main()
{
	Shop s[5]={
	{1,"Bata Shoes","Minar Road","Sukkur"},
	{2,"Des Pardes","Bilawal park","Khairpur"},
	{3,"Shalimar","Hala","Hayderabad"},
	{4,"Sports","Minar Pak","Lahore"},
	{5,"TucShop","IBA Karachi","Karachi"}
	};
	
	int choice;
	cout<<"*****************************************************************************\n";
	cout<<"Shop ID   \tShop Name\t\tShopCity\tShopAdd"<<endl;
	cout<<"*****************************************************************************\n";
	for(int i=0; i<5; i++)
	{
		cout<<s[i].ShopID<<"         \t"<<s[i].ShopName<<"           \t"<<s[i].ShopCity<<"\t       "<<s[i].ShopAdd<<endl;
		
	}

	cout<<endl;	
	cout<<"1. Search details by Shop Name "<<endl;
	cout<<"2. Search details by Shop City "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				string name;
				cout<<"Enter Shop Name which you want to Search ";
				cin.ignore();
				getline(cin,name);
				for(int i=0; i<5; i++)
				{
					if(name == s[i].ShopName)
					{
						cout<<"Shop ID : "<<s[i].ShopID<<endl;
						cout<<"Shop Name : "<<s[i].ShopName<<endl;
						cout<<"Shop City : "<<s[i].ShopCity<<endl;
						cout<<"Shop Address : "<<s[i].ShopAdd<<endl;
					}	
				}
			}
			break;
		case 2:
			{
				string cityName;
				cout<<"Enter Shop city which you want to search : ";
				cin>>cityName;
				for(int i=0; i<5; i++)
				{
					if(cityName == s[i].ShopCity)
					{
						cout<<"Shop ID : "<<s[i].ShopID<<endl;
						cout<<"Shop Name : "<<s[i].ShopName<<endl;
						cout<<"Shop City : "<<s[i].ShopCity<<endl;
						cout<<"Shop Address : "<<s[i].ShopAdd<<endl;
					}		
				}
			}
			break;
	}
return 0;
}

