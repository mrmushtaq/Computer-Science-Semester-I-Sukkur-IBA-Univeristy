#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"\nEnter a number\n";
	cin>>number;
	
	if(number>0)
	cout<<"\n"<<number<<" is positive number\n";
	else if(number<0)
		cout<<"\n"<<number<<" is negative number\n";
	else
	cout<<"\n"<<number<<" is zero\n";		
return 0;
}

