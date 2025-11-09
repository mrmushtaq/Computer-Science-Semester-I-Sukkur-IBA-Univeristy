#include<iostream>
using namespace std;
int Findgreater(int n1, int n2);
int main()
{
	int num1, num2;
	cout<<"Enter number 1 : ";
	cin>>num1;
	cout<<"Enter number 2 : ";
	cin>>num2;
	
	int result=Findgreater(num1, num2);
	cout<<result<<" is greater .";
}

int Findgreater(int n1, int n2)
{
	if(n1>n2)
	return n1;
	else
	return n2;
}
