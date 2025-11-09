#include <iostream>
using namespace std;
Power(int x, int power)
{
	int result=1;
	for(int i=0; i<power; i++)
	{
		result*=x;				
	}
	return result;
}

int main() {

int x, power;
cout<<"Enter base: ";
cin>>x;

cout<<"Enter power: ";
cin>>power;

cout<<"\n"<<Power(x, power);


    return 0;
}

