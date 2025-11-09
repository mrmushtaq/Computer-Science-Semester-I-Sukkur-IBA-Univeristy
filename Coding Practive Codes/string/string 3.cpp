#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string username,Myname="Mushtaque";
	while (true)
	{
		cout<<" Enter your name (or quit to exit) ";
		getline(cin,username);

		if(username=="Ashfaque")
		{
			cout<<"Hello !  Ashfaque ,  Welcome back....";
		}
		else if(username=="quit")
		{
			cout<<endl;
			break;
		}
		else if(username!=Myname);
		{
			cout<<"HEllo   "<<Myname<<endl;
		}

		
	}

return 0;
}

