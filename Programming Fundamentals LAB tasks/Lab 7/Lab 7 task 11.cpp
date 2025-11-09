#include <iostream>
using namespace std;
int main ()
{
	int size, smallest;
	cout<<"Enter size if an array : ";
	cin>>size;
	
	cout<<"Enter number "<<1<<" : ";
	cin>>smallest;
	
	int arr[size];
	for(int i=1; i<size; i++)
	{
		cout<<"Enter number "<<i+1<<" :  ";
		cin>>arr[i];
			
		if(arr[i]<smallest)
		smallest=arr[i];
		
	}
cout<<endl<<"The smallest number is "<<smallest;

return 0;
}


