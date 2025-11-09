#include <iostream>
using namespace std;
int main ()
{
	string team[5];
	string*ptr;
	
	ptr= team;	
	cout<<"\nEnter five Cricket Teams of the world \n";
	for(int i=0; i<5; i++)
	{
		cout<<"Team "<<i+1<<" :  ";
		cin>>*(ptr+i);
	}

cout<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"Team "<<i+1<<"  --> ";
		cout<<*(ptr+i)<<endl;
	}	
return 0;
}


