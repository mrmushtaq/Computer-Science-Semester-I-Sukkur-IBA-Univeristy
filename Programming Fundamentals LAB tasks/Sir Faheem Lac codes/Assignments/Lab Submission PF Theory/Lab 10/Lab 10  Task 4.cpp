#include <iostream>
using namespace std;
void ReverseString(string &reverse)
{
	char*ptr;
	cout<<"\nString in REVERSE order\n";
	for(int i=reverse.length()-1;i>=0; i--)
	{
		ptr[i]=reverse[i];
		cout<<ptr[i];
	}
	
	delete[] ptr;
}
int main ()
{	
	string str;
	cout<<"Enter a string \n";
	getline(cin, str);
	
	ReverseString(str);
	
	
return 0;
}


