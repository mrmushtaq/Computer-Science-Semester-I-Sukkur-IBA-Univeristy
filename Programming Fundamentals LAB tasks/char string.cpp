#include <iostream>
using namespace std;
int main ()
{
	char c[]="MushtaqueAli";

	char*ptr;
	ptr=c;
	
	for(int i=0; i!='\n'; i++)
	{
		cout<<ptr[i]<<" ";
	}
	
return 0;
}
