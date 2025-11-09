#include <iostream>
using namespace std;
int main ()
{
	int num, factorial=1 ;
	cout<<"\nEnter a number: "<<endl;
	cin>>num;
	
	for (int i=1; i<=num; i++)
	factorial*=i; 
	cout<<"\nIts Factorial is "<<factorial<<endl;


return 0;
}


