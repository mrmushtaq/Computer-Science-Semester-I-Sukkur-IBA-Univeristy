#include <iostream>
using namespace std;
int main ()
{
	
	
	int num;    //num= input number
	cout<<" Enter a any number upto ten digits : ";
	cin>>num;
	
		int  arr[num];
	for (int i=0; i<num; i++)
	{
		arr[i]=num%10;
		num/=10;
	}
	
	
	cout<<"\nSame digits printed in array: \n";
	for(int i=10; i>=0; i--)
	cout<<arr[i]<<" ";

	cout<<"\n\nSame pattern of digits in reverse order \n";     
	for(int i=0; i<num; i++)
	cout<<arr[i]<<" ";
	

	for(int i=0; i<10; i++)
	{
		for(int j=0; j<num; j++)
		{
			if(arr[j]>arr[i])
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	cout<<"\n\nSame digits arranged in assending order: \n";
	for(int i=0; i<10
	; i++)
	cout<<arr[i]<<" ";
	
	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			if(arr[j]<arr[i])
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	cout<<"\n\nSame digits arranged in descending order: \n";
	for(int i=0; i<num; i++)
	cout<<arr[i]<<" ";



return 0;
}


