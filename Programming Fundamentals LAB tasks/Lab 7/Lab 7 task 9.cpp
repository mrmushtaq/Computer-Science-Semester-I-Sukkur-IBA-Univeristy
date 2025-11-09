#include<iostream>
using namespace std;
int main()
{
	int N=5, M=6;      // any integers
	int arr1[N]={19,86,32,43,45}, arr2[M]={23,34,23,12,15,20},arr3[N+M];
	cout<<"The values of first array are: \n";
	
		for(int i=0; i<N; i++)
		cout<<arr1[i]<<" ";

	cout<<endl<<endl;
	cout<<"The values of second array are: \n";
	
		for(int i=0; i<M; i++)
			cout<<arr2[i]<<" ";
			
		for( int i=0; i<N;i++)
			arr3[i]=arr1[i];
			
			for( int i=0; i<M;i++)
			arr3[5+i]=arr2[i];
				
	cout<<endl<<endl;		
	cout<<"The values of third array are: \n";		
		for(int i=0; i<N+M; i++)
			cout<<arr3[i]<<" ";
			
	return 0;
}


