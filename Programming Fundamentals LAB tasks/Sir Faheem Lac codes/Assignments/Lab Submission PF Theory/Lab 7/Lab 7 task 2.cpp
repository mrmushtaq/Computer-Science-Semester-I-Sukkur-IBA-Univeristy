#include<iostream>
using namespace std;
int main()
{
	int size, sum=0;
	cout<<"Enter a size of array: ";
	cin>>size;
	
	int a[size];
	for( int i=0; i<size; i++)
	{
		cout<<"Enter value number "<<i+1<<" : ";
		cin>>a[i];
	}
		
	for(int i=0; i<size ; i++)
		sum+=a[i];
	
		cout<<"\nThe sum of given numbers is "<<sum<<endl;
	
return 0;
}


