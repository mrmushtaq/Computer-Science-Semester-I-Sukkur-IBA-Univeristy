#include <iostream>
using namespace std;
int main ()
{
	int  n,n1,n2,n3,n4,n5,n6,sum;
	cout<<"\nEnter a six digit number\n";
	cin>>n;
	
	
	cout<<n%10<<endl;
	
	cout<<n%100/10<<endl;
	
	cout<<n%1000/100<<endl;
	
	cout<<n%10000/1000<<endl;
	
	cout<<n%100000/10000<<endl;
	
	cout<<n%1000000/100000<<endl;

if(n1%2==0)
cout<<n1<<" is even";
else
cout<<n1<<" is odd";
	
	
  return 0;
 }


