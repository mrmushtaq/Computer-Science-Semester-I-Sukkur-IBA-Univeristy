#include <iostream>
using namespace std;
void Calc(int n1,int n2,char o);  //function prototype / declaration


int main ()
{



cout<<"\n Welcome";
int no1, no2, r;
char op;

cout<<"\n Enter no1 : ";
cin>>no1;
cout<<"\n Enter no2 : ";
cin>>no2;
cout<<"\n Enter operator ";
cin>>op;


Calc(no1,no2,op);  //fucntion call
//cout<<"\n Result : "<<result;
cout<<"\n Wecome back";
Calc(5,8,'-');  //fucntion call
//cout<<"\n Result : "<<result;
cout<<"\n Again welcome back";
Calc(no1,no2,op);  //fucntion call
//cout<<"\n Result : "<<result;



system ("pause");
return 0;
}

void Calc(int n1,int n2,char o)  //function defination
{
	
int r;

switch(o)
{
	case '+':
		//cout<<"\n Result : "<<no1+no2;
		r = n1+n2;
		break;

	case '-':
		//cout<<"\n Result : "<<no1-no2;
		r = n1-n2;
		break;
	default:
		
		//cout<<"\n Invalid Operator : ";
		r = -11111;
}

cout<<"\n Result : "<<r;
	
}

