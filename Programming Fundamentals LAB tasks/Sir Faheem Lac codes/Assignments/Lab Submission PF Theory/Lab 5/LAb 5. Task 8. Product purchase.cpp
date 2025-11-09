#include <iostream>
using namespace std;
int main ()
{
	int choice,quantity, book_n=0, tshirt_n=0, shoes_n=0, books_p=0, tshirts_p=0, shoes_p=0, total_bill=0;
	
	for(int i=0; i<=choice; i)
	{
		cout<<"\nEnter any number to select any product no: to buy or enter 0 to exit: ";
		cout<<"\n1. Books (per item price = 500 .";
		cout<<"\n2. T-Shirt (per item price = 700. ";
		cout<<"\n3. Shoes (per item price = 1000. ";
		cout<<"\n0. Exit the Program. ";
		cin>>choice;
		
		if(choice==1)
		{
			cout<<"\nEnter Quantity: ";
			cin>>quantity;
			book_n+=quantity;
			books_p=book_n*500;		
		}
		
		else if(choice==2)
		{
			cout<<"\nEnter Quantity: ";
			cin>>quantity;
			tshirt_n+=quantity;
			tshirts_p=tshirt_n*700;		
		}
		
		else if(choice==3)
		{
			cout<<"\nEnter Quantity: ";
			cin>>quantity;
			shoes_n+=quantity;
			shoes_p=shoes_n*1000;		
		}
		else if (choice==0)
		{
			cout<<"\nYou have bought "<<book_n<<" books (price = "<<books_p<<" )";
			cout<<"\nYou have bought "<<tshirt_n<<" tshirst (price = "<<tshirts_p<<" )";
			cout<<"\nYou have bought "<<shoes_n<<" shoes (price = "<<shoes_p<<" )";
			
			total_bill+=books_p + tshirts_p + shoes_p;
			cout<<"\n\nTotal Bill = "<<total_bill;
		    break;
			
		}
		else 
		{
			cout<<"\nInvalid Entry";
		}
   }   
   

return 0;
}

