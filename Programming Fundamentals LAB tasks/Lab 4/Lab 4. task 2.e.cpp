#include<iostream>
using namespace std;
int main()
{

	int num,a;
		cout<<"\nEnter a number"<<endl;
		cin>>num;
		
		a=num%2;
	
	switch (a)
	{
		case 0:
			cout<<"\n"<<num<<" is even\n\n";
			break;
		case 1:
			cout<<"\n"<<num<<" is odd\n\n";
			break;
		default:
			cout<<"\nInvalid Entry"<<"\n\n";	
		
	}
	
system("PAUSE");
return 0;
}

