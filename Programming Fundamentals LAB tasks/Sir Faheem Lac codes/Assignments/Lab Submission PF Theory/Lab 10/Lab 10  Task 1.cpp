#include <iostream>
using namespace std;
int main ()
{
	cout<<"Five examples of Leap Year \n\n";
	int year[5]={2004,2008,2012,2016,2020};
	int*ptr;
	
	ptr= year;	
	cout<<"\nYear Address\tYear Name\n";
	for(int i=0; i<5; i++)
	{
		cout<<ptr+i<<"\t"<<*(ptr+i)<<endl;
	}
	
return 0;
}


