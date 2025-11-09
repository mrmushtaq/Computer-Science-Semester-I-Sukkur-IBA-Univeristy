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
	double shopAdd;
	Product product[3];
};

int main ()
{
Shop s;

cout<<"\n Enter ShopID : ";
cin>>s.shopId;
cout<<"\n Enter ShopName : ";
cin>>s.shopName;
cout<<"\n Enter ShopAdd : ";
cin>>s.shopAdd;
for(int i=0;i<3;i++)
{
	
cout<<"\n Enter productID : ";
cin>>s.product[i].productId;
cout<<"\n Enter product name : ";
cin>>s.product[i].productName;
cout<<"\n Enter product price: ";
cin>>s.product[i].productPrice;
}


cout<<"\n ShopID : "<<s.shopId;
cout<<"\n ShopName : "<<s.shopName;
cout<<"\n ShopAdd : "<<s.shopAdd;
for(int i=0;i<3;i++)
{
cout<<"\n productID : "<<s.product[i].productId;
cout<<"\n product name : "<<s.product[i].productName;
cout<<"\n product price: "<<s.product[i].productPrice;
}



cout<<endl;
system ("pause");
return 0;
}

