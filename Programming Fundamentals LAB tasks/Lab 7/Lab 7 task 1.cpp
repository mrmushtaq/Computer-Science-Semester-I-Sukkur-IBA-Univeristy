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
	
	cout<<"Numbers in reverse order are: "<<endl;
	for(int i=size-1; i>=0 ; i--)
	cout<<a[i]<<" ";
	
	
return 0;
}


