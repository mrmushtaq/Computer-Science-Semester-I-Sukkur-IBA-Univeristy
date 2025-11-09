#include<iostream>
using namespace std;
int main()
{
	float num1, num2;
	char oper;
	cout<<"Enter a number\n";
	cin>>num1;
	cout<<"Enter operator (+ , - , * , /)\n";
	cin>>oper;
	cout<<"Enter another number\n";
	cin>>num2;
	
	if(oper=='+')
	cout<<"\nThe sum is "<<num1+num2<<"\n\n";
	else if(oper=='-')
	cout<<"\nThe subtraction is "<<num1-num2<<"\n\n";
	else if(oper=='*')
	cout<<"\nThe product is "<<num1*num2<<"\n\n";
	else if(oper=='/')
	cout<<"\nThe division is "<<num1/num2<<"\n\n";
	
	else
	cout<<"Invalid Entry";
	
	
return 0;
}

