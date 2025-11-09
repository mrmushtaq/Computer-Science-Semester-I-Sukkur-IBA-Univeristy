#include <iostream>
using namespace std;
int factorial(int num)
{
	if(num>1)
	{
		return num*factorial(num-1);
	}
	else
	return 1;
}
int main ()
{
	int num;
	cout<<"Enter a number to find its factorial : ";
	cin>>num;
	
	if(num>=0)
	{
		cout<<"\nFactorial is "<<factorial(num);
	}
	else
	cout<<"\nInvalid Entry";
	
	


return 0;
}


