#include<iostream>
using namespace std;
bool FindEvenorOdd(int num);
int main()
{
	double num;
	cout<<"Enter a number to check whether it is even or not : ";
	cin>>num;
		
	bool check=FindEvenorOdd(num);
	
	if(check==true)
	cout<<endl<<"The number is even.";
	else
	cout<<endl<<"The number is NOT even. ";
}

bool FindEvenorOdd(int num)
{
	if(num%2==0)
	return true;
	else 
	return false;

}
