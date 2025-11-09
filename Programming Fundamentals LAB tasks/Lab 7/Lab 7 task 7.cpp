#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter a size of array: ";
	cin>>size;
	
	int a[size], b[size];  // array1 and array 2 
	for( int i=0; i<size; i++)
	{
		cout<<"Enter value number "<<i+1<<" : ";
		cin>>a[i];
	}

    	cout<<"The elements of first array are: \n";
		for(int i=0; i<size; i++)
		cout<<a[i]<<" ";

  		cout<<endl<<endl;
		cout<<"The elements of second array are: \n";
		for(int i=size-1; i>=0; i--)
		{
			b[i]=a[i];
			cout<<b[i]<<" ";
		}
	
	return 0;
}


