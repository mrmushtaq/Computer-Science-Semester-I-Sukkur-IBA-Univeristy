#include <iostream>
using namespace std;

struct Product
{
int productId;
string productName;
double productPrice;	
};

struct Shop
{
	int shopId;
	string shopName;
	string shopAdd;
	Product product[3];
};

int main ()
{
Shop s[2];

for(int j=0;j<2;j++)
{

	cout<<"\n Enter ShopID : ";
	cin>>s[j].shopId;
	cout<<"\n Enter ShopName : ";
	cin>>s[j].shopName;
	cout<<"\n Enter ShopAdd : ";
	cin>>s[j].shopAdd;
	for(int i=0;i<3;i++)
		{
	
		cout<<"\n Enter productID : ";
		cin>>s[j].product[i].productId;
		cout<<"\n Enter product name : ";
		cin>>s[j].product[i].productName;
		cout<<"\n Enter product price: ";
		cin>>s[j].product[i].productPrice;
		}			

}

for(int j=0;j<2;j++)
{

	cout<<"\n ShopID : "<<s[j].shopId;
	cout<<"\n ShopName : "<<s[j].shopName;
	cout<<"\n ShopAdd : "<<s[j].shopAdd;
	for(int i=0;i<3;i++)
	{
		cout<<"\n productID : "<<s[j].product[i].productId;
		cout<<"\n product name : "<<s[j].product[i].productName;
		cout<<"\n product price: "<<s[j].product[i].productPrice;
	}		

}




cout<<endl;
system ("pause");
return 0;
}

