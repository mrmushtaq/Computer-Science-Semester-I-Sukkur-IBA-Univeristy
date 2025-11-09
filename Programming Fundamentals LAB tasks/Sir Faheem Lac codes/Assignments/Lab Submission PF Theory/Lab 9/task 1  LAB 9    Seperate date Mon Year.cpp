#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string date;
	cout<<"Enter date (DD/MM/YY) i.e (05/03/2023): ";
	getline(cin,date);
	
	cout<<"\nThe date is "<<date.substr(0,2);
	cout<<"\nThe month is "<<date.substr(3,2);
	cout<<"\nThe year is "<<date.substr(6,4);
	
return 0;
}

