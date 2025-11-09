#include <iostream>
using namespace std;
int main ()
{
	int range;
	cout<<"\nEnter a range upto which the loop should run. ";
	cin>>range;
	
	for(int i=1; i<=range; i++)
	{
		if(i%5==0)
		cout<<endl<<i;
	}

return 0;
}


