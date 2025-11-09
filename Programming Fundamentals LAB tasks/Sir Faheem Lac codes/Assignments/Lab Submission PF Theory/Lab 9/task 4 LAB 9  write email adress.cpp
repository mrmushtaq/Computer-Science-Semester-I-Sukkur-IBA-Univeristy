#include<iostream>
#include<string>
using namespace std;

int main ()
{
	string email,Firstname,Lastname;

	cout<<"Enter your First name : ";
	getline(cin, Firstname);
	
	cout<<"Enter your Last name : ";
	getline(cin, Lastname);
	
	email=Firstname+"."+Lastname+"@iba-suk.edu.pk";
	cout<<" Email Address is : "<<email;
		
return 0;
}



