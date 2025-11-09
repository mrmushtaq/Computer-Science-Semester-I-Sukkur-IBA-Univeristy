#include <iostream>
using namespace std;
int main ()
{
	int range;
	cout<<"\nEnter a range upto which the loop should run. ";
	cin>>range;
	
	for ( int i=0; i<=range; i++)
	{
		if(i%2==0)
		cout<<"\n"<<i;
		
	}

return 0;
}


