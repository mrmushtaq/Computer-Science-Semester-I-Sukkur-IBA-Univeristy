#include<iostream>
using namespace std;
void printTable(int number);
void printTable(int num, int Range);
int main()
{
	int num, range;
	cout<<"Enter any number to print table: ";
	cin>>num;
	printTable(num);

	cout<<"\nEnter any number to print table: ";
	cin>>num;
	cout<<"Enter max: range for table: ";
	cin>>range;
	cout<<endl;
	printTable(num, range);
	cout<<endl;
}

void printTable(int number)
{
	for(int  i=1; i<=10; i++)
	{
		cout<<number<<" * "<<i<<" = "<<number*i<<endl;;
	}
}

void printTable(int num, int range)
{
	for(int  i=1; i<=range; i++)
	{
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;;
	}
}
