#include <iostream>
using namespace std;
bool Perfect(int x)
{
	bool result=false;
	for(int i=1; i<x; i++)
	{
		if(i*i==x)
		{
			result=true;
			break;	
		}
		else
		result=false;				
	}
	return result;
}

int main() {

int x;
cout<<"Enter number to check perfect square or not :  ";
cin>>x;

bool result=Perfect(x);
if(result==true)
cout<<"\nNumber is perfect square";
else
cout<<"\nNumber is not perfect square";



    return 0;
}

