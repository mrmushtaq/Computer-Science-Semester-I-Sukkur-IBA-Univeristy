#include<iostream>
#include<string>
using namespace std;

int main ()
{
	string number, network;
	cout<<"The accepted networks are only (0300/0315/0333/0345) others are not accepted";
	cout<<"\n\nEnter a phone number : ";
	getline(cin, number);
	
	network=number.substr(0,4);
	if(network=="0300")
	cout<<"\nNetwork is Moblink. ";
	else if(network=="0333")
	cout<<"\nNetwork is Ufone. ";
	else if(network=="0315")
	cout<<"\nNetwork is Zong. ";
	else if(network=="0345")
	cout<<"\nNetwork is Telenor. ";	
else
	cout<<"The netwrok does'nt match";
	
return 0;
}
