#include <iostream>
using namespace std;
void Assending(int ptr[10])
{
	for(int i=0; i<10; i++)
	{
		for(int j=0;j<10; j++)
		{
			if(ptr[j]>ptr[i])
			{
				int temp=ptr[j];
				ptr[j]=ptr[i];
				ptr[i]=temp;
			}
		}
	}
	
}

void Descending(int ptr[10])
{
	for(int i=0; i<10; i++)
	{
		for(int j=0;j<10; j++)
		{
			if(ptr[j]<ptr[i])
			{
				int temp=ptr[j];
				ptr[j]=ptr[i];
				ptr[i]=temp;
			}
		}
	}
	
}


int main ()
{	
	int arr[10];
	cout<<"Enter 10 numbers \n";
	for(int i=0; i<10; i++)
	{
		cout<<"Number "<<1+i<<" :  ";
		cin>>arr[i];		
	}
	int*ptr;
	
	ptr=arr;
cout<<"Values of Arrays in unsorted order \n";
for(int i=0; i<10;i++)
{
	cout<<arr[i]<<" ";
}
	
	Assending(arr);
	cout<<"\n\nValues of Arrays in Assending order \n";
for(int i=0; i<10;i++)
{
	cout<<arr[i]<<" ";
}	

	Descending(arr);
	cout<<"\n\nValues of Arrays in Descending order \n";
for(int i=0; i<10;i++)
{
	cout<<arr[i]<<" ";
}	
	
return 0;
}


