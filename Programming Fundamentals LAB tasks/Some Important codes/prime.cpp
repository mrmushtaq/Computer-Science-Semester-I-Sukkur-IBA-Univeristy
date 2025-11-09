#include <iostream>
using namespace std;
int main ()
{
	
	int n;
	string is_Prime;
	cin>>n;
	for(int i=2; i<n; i++)
	{
		if(n%i==0)
		{
			is_Prime="is not Prime";
			break;
		}
		else 
		{
			is_Prime = "Prime";
		}
	}
	if(n==2)
	cout<<"is prime";
	
	cout<<is_Prime;

return 0;
}


