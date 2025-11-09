#include <iostream>
using namespace std;
void first(int num1,int num2);
void second_r(int &num3,int &num4);
int main ()
{

	cout<<"IN MAIN : ";
	int num1=10,num2=20,num3=30,num4=40;
	
	first(num1,num2);
	
	second_r(num3,num4);
	
	cout<<endl<<"After calling the function in main values are: ";
	cout<<endl<<"num1: "<<num1;
	cout<<endl<<"num2: "<<num2;
	cout<<endl<<"num3: "<<num3;
	cout<<endl<<"num4: "<<num4;
	
	
	return 0;
}
void first(int num1,int num2)
{
	
	cout<<endl<<"First function call by value: ";
	
	
	cout<<endl<<"before changing: ";
	cout<<endl<<"num1: "<<num1;
	cout<<endl<<"num2: "<<num2;
	
	num1=50;
	num2=60;
	
	cout<<endl<<"After changing in function : ";
	cout<<endl<<"num1: "<<num1;
	cout<<endl<<"num2: "<<num2;
}

void second_r(int &num3,int &num4)
{
	cout<<endl<<"Second function call by refrence: ";
	
    cout<<endl<<"before changing: ";
	cout<<endl<<"num3: "<<num3;
	cout<<endl<<"num4: "<<num4;
	
	num3=70;
	num4=80;
	
	cout<<endl<<"After changing in function : ";
	cout<<endl<<"num1: "<<num3;
	cout<<endl<<"num2: "<<num4;
	
}
