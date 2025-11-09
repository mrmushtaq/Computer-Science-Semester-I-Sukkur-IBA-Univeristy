#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter a size of array: ";
	cin>>size;
	cout<<endl;
	
	int a[size];
	for( int i=0; i<size; i++)
	{
		cout<<"Enter value number "<<i+1<<" : ";
		cin>>a[i];
	}
	
	cout<<"The values on the odd indices are: \n";
	for(int i=0; i<size; i++)
	{
		if(i%2!=0)
		cout<<a[i]<<" ";
	}
			
return 0;
}


