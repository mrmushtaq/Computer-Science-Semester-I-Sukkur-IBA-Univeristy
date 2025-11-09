#include <iostream>
using namespace std;
int main ()
{
	int size, largest;
	cout<<"Enter size of an array : ";
	cin>>size;
	
	cout<<"Enter number "<<1<<" : ";
	cin>>largest;
	
	int arr[size];
	for(int i=1; i<size; i++)
	{
		cout<<"Enter number "<<i+1<<" :  ";
		cin>>arr[i];
			
		if(arr[i]>largest)
		largest=arr[i];
		
	}
cout<<endl<<"The largest number is "<<largest;

return 0;
}


