#include <iostream>
using namespace std;
void Calc(void);  //function prototype / declaration


int main ()
{

cout<<"\n Welcome";

Calc();  //fucntion call
cout<<"\n Wecome back";
Calc();
cout<<"\n Again welcome back";
Calc();



system ("pause");
return 0;
}

void Calc(void)  //function defination
{
	
int no1, no2
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

	
}

