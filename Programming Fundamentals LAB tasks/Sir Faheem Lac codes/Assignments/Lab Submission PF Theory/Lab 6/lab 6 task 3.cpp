#include <iostream>
using namespace std;
int main ()
{
	int range;
	cout<<"Enter a range upto which you want to find tables: ";
	cin>>range;
	
	for (int i=1; i<=range; i++)
	{
		cout<<"table of "<<i<<endl;
		for (int j=1; j<=10; j++)
		{
			cout<<j<<" * "<<i<<" = "<<j*i;
			cout<<endl;
		}
		cout<<endl;
		
	}


return 0;
}


