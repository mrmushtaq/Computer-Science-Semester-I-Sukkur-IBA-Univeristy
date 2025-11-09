#include<iostream>
using namespace std;
int main()
{
	char choice, oper;
	double num1, num2;
		cout<<"Enter NO: and NO:"<<endl;
		cin>>num1>>num2;
		cout<<"Enter Operator (+ - * / %)"<<endl;
		cin>>oper;
	
	switch(oper)
	{
		case '+':
			cout<<"\n(The Addition) "<<num1<<"+"<<num2<<" = "<<num1+num2<<"\n\n";
			break;
		case '-':
			cout<<"\n(The subtraction) "<<num1<<"-"<<num2<<" = "<<num1-num2<<"\n\n";
			break;
		case '*':
			cout<<"\n(The Product) "<<num1<<"*"<<num2<<" = "<<num1*num2<<"\n\n";
			break;
		case '/':
			cout<<"\n(The division) "<<num1<<"/"<<num2<<" = "<<num1/num2<<"\n\n";
			break;
		default:
			cout<<"\nInvalid Entry"<<"\n\n";	
		
	}
	
system("PAUSE");
return 0;
}

