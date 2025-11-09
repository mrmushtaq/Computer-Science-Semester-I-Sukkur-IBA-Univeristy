#include <iostream>
using namespace std;
int main ()
{
	int num;
	float n, lowest=0, highest=0;
	
	cout<<"\nHow many numbers do you have ?  ";
	cin>>num;
	
	for(int i=1; i<=num; i++)
	{
		cout<<"\nPlease Enter number_"<<i<<"\t";
		cin>>n;
		
		if(n>=highest)
			highest=n;
		else if(n<lowest)
			lowest=n;
			
			
			
	}
	cout<<"\nThe highest number is "<<highest;
	cout<<"\nThe Lowest number is "<<lowest;
	


return 0;
}


