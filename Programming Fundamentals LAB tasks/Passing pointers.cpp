#include <iostream>
using namespace std;
void print(int* ptr[])
{
	cout<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<*(ptr[i])<<" ";
	}
}
int main ()
{
	int* ptr[5], temp;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter integer pointers : ";
		cin >> temp;
		ptr[i]= new int(temp);
	}
	print(ptr);
	
	for(int i=0; i<5; i++)
	{
		delete ptr[i];
	}
	
return 0;
}
