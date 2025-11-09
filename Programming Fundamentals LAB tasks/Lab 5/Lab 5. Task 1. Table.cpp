#include <iostream>
using namespace std;
int main ()
{
	int table;
	cout<<"\nENter number to show table. ";
	cin>>table;
	
	for(int i=1;i<=10; i++)
	{
		cout<<endl<<table<<" * "<<i<<" = "<<table*i;
	}

return 0;
}


