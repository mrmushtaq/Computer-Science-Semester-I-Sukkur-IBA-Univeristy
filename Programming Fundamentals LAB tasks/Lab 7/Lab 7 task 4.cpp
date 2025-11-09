#include<iostream>
using namespace std;
int main()
{
	int num[5]={19,86,32,43,45}, n[5];
	cout<<"The elements of first array are: \n";
	
		for(int i=0; i<5; i++)
		cout<<num[i]<<" ";

	cout<<endl<<endl;
	cout<<"The elements of second array are: \n";
	
		for(int i=0; i<5; i++)
		{
			n[i]=num[i];
			cout<<n[i]<<" ";
		}
	
	return 0;
}


