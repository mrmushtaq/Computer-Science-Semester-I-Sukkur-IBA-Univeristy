#include <iostream>
using namespace std;
int Calc(void);  //function prototype / declaration


int main ()
{

cout<<"\n Welcome";

int result = Calc();  //fucntion call
cout<<"\n Result : "<<result;
cout<<"\n Wecome back";
result = Calc();  //fucntion call
cout<<"\n Result : "<<result;
cout<<"\n Again welcome back";
result = Calc();  //fucntion call
cout<<"\n Result : "<<result;



system ("pause");
return 0;
}

int Calc(void)  //function defination
{
	
int no1, no2, r;
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
		//cout<<"\n Result : "<<no1+no2;
		r = no1+no2;
		break;

	case '-':
		//cout<<"\n Result : "<<no1-no2;
		r = no1-no2;
		break;
	default:
		
		//cout<<"\n Invalid Operator : ";
		r = -11111;
}


return r;
	
}

