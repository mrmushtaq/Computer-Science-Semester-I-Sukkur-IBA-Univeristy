
// Function is not used
#include <iostream>
using namespace std;

int main ()
{

cout<<"\n Welcome";

int no1, no2;
char op;

cout<<"\n Enter no1 : ";
cin>>no1;
cout<<"\n Enter no2 : ";
cin>>no2;
cout<<"\n Enter operator ";
cin>>op;

switch(op)
{
	case '+':
		cout<<"\n Result : "<<no1+no2;
		break;

	case '-':
		cout<<"\n Result : "<<no1-no2;
		break;
	default:
		cout<<"\n Invalid Operator : ";
		
}

cout<<"\n Wecome back";
cout<<"\n Enter no1 : ";
cin>>no1;
cout<<"\n Enter no2 : ";
cin>>no2;
cout<<"\n Enter operator ";
cin>>op;

switch(op)
{
	case '+':
		cout<<"\n Result : "<<no1+no2;
		break;

	case '-':
		cout<<"\n Result : "<<no1-no2;
		break;
	default:
		cout<<"\n Invalid Operator : ";
		
}

cout<<"\n Again welcome back";
cout<<"\n Enter no1 : ";
cin>>no1;
cout<<"\n Enter no2 : ";
cin>>no2;
cout<<"\n Enter operator ";
cin>>op;

switch(op)
{
	case '+':
		cout<<"\n Result : "<<no1+no2;
		break;

	case '-':
		cout<<"\n Result : "<<no1-no2;
		break;
	default:
		cout<<"\n Invalid Operator : ";
		
}


system ("pause");
return 0;
}

