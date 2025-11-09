#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int average[10]={5,10,15,20,25,30,35,40,45,50};
	
	cout<<"The values of the array are: ";
	for(int i=0; i<10; i++)
	cout<<average[i]<<" ";
	
	cout<<endl;
	for(int i=0; i<10 ; i++)
		sum+=average[i];
	
	cout<<"\nThe average is "<<sum/10<<endl;
	
return 0;
}


