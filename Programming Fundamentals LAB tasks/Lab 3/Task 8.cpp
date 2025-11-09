#include<iostream>
using namespace std;
int main ()
       {
	int num1, num2, num3;
		cout<<"Enter a number\n";
	cin>>num1;
		cout<<"Enter another number\n";
	cin>>num2;
		cout<<"Enter third number\n";
	cin>>num3;
	
	if(num1>num2 && num1>num3)
		cout<<"\n"<<num1<<" is the largest\n\n";
	else if(num2>num1 && num2>num3)
		cout<<"\n"<<num2<<" is the largest\n\n";
	else if(num3>num2 && num3>num1)
		cout<<"\n"<<num3<<" is the largest\n\n";
	else if (num1==num2 && num1>num3)
		cout<<"\n"<<num1<<" is the largest\n\n";
	else if (num1==num3 && num1>num2)
		cout<<"\n"<<num1<<" is the largest\n\n";
	else if (num2==num3 && num2>num1)
		cout<<"\n"<<num2<<" is the largest\n\n";
	else if (num1==num2 && num2==num3)
		cout<<"\nAll numbers are equal\n\n";
	else
		cout<<"\nInvalid Entry\n\n";
	
	return 0;
          }

