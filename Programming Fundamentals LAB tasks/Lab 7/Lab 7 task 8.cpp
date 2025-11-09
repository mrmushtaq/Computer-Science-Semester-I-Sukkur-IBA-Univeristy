#include<iostream>
using namespace std;
int main()
{
	int arr1[5]={19,86,32,43,45}, arr2[5]={23,34,23,12,15},sum[5];
	cout<<"The elements of first array are: \n";
	
		for(int i=0; i<5; i++)
		cout<<arr1[i]<<" ";

	cout<<endl<<endl;
	cout<<"The elements of second array are: \n";
	
		for(int i=0; i<5; i++)
			cout<<arr2[i]<<" ";
			
		for(int i=0; i<5;i++)
			sum[i]=arr1[i]+arr2[i];
			
	cout<<endl<<endl;
	cout<<"The sum of both arrays: \n";	
		for(int i=0; i<5; i++)
		cout<<sum[i]<<" ";
	
	return 0;
}


