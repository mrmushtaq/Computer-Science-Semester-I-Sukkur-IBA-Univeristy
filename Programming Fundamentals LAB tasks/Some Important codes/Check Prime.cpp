#include <iostream>
using namespace std;
int main ()
{
	
	int num;
	bool isPrime=false;
	cout<<"Enter a number : ";
	cin>>num;
	
	for(int i=2; i<=num/2; i++)
	{
		if(num%i==0)
		{
			cout<<"\n"<<num<<" is composite numer.";
			isPrime=false;
			break;
		}
		else
		isPrime=true;
	}
	
	if(isPrime==true && num>1)
	cout<<"\n"<<num<<" is a Prime number.";
	if(num<1)
	cout<<"\nInvalid entry, Please input positive number";
	if(num==1)
	cout<<"\n"<<num<<" is neither prime nor composite.";
	if(num==2 || num==3)
	cout<<"\n"<<num<<" is prime.";

return 0;
}


