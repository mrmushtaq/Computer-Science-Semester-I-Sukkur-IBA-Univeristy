#include <iostream>
using namespace std;
int main ()
{   
	int sum=0;
	
	for (int i=0; i>=0; i++)
	{    
		cout<<"\nEnter a number: ";
		cin>>i;
		
		if(i>=0 && i<=30) 
			sum+=i;
		
		else
		{
			if(i>30)
			cout<<"\nNumber is greater than 30 and won't be calculated.\n ";
		}
		
	}
	cout<<"\nThe sum is "<<sum;


return 0;
}


