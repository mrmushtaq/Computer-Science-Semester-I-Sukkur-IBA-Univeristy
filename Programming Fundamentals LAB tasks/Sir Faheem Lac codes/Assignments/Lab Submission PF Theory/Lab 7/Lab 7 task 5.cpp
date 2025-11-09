#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter a size of array: ";
	cin>>size;
	
	int a[size];
	for( int i=0; i<size; i++)
	{
		cout<<"Enter value number "<<i+1<<" : ";
		cin>>a[i];
	}
	
	cout<<"The even numbers are: \n";
	for(int i=0; i<size ; i++)
	{
		if(a[i]%2==0)
		cout<<a[i]<<" ";		
	}
	
	
return 0;
}


