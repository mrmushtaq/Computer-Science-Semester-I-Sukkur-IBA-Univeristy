#include<iostream>
using namespace std;
string number(int num);
int main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	
	string result=number(num);
	cout<<num<<" is "<<result<<" .";
}

string number(int num)
{
	if(num%2==0)
	return "Even";
	else
		return "Odd";
}
