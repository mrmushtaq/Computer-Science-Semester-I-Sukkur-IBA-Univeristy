#include<iostream>
using namespace std;
int sub(int n1,int n2);
int mul(int n1,int n2);
int div(int n1,int n2);
int rem(int n1,int n2);
int main()
{
	int result,n1, n2;
	cout<<"Enter a number 1: ";
	cin>>n1;
	cout<<"Enter a number 2: ";
	cin>>n2;
	cout<<endl;
	result=sub(n1,n2);
	cout<<"The subtraction is "<<result;
	cout<<endl;
	result=mul(n1,n2);
	cout<<"The Multiplication is "<<result;
	cout<<endl;
	result=div(n1,n2);
	cout<<"The Division is "<<result;
	cout<<endl;
	result=rem(n1,n2);
	cout<<"The Remainder is "<<result;
	cout<<endl;
}

int sub(int n1, int n2)
	{
		return n1-n2;	
	} 

int mul(int n1, int n2) 
	{
		return n1*n2;	
	}
	
int div(int n1, int n2) 
	{
		return n1/n2;
	}

int rem(int n1, int n2) 
	{
		return n1%n2;
	}
	




