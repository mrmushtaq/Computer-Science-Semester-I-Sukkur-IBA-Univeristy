#include<iostream>
using namespace std;
int main()
{
	int size, search, temp;
	bool found=false;
	cout<<"Enter a size of array: ";
	cin>>size;
	
	int arr[size];
	for( int i=0; i<size; i++)
	{
		cout<<"Enter value number "<<i+1<<" : ";
		cin>>arr[i];
	}
	
	cout<<"Enter the value you want to search from this array :  ";
	cin>>search;
	
	
	for(int i=0; i<size ; i++)
	{
	
		if(arr[i]==search)
		{
			 temp=i;
			found=true;
			break;
		}
		
	}
	
	if(found)
	cout<<search<<" is present in the array at index "<<temp;
	else
	cout<<search<<" is not present in the array...\n\n";
	
	
	
return 0;
}


