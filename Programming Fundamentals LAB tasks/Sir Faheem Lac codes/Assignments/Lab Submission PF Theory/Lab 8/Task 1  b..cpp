#include<iostream>
using namespace std;
int square(int n);
int main()
{
	int result, n;
	result=square(n);
	cout<<"The square of that number is "<<result;
}

int square(int n)
	{	
		cout<<"Enter a number : ";
		cin>>n;
		
		return n*n;	
	} 
