#include <iostream>
using namespace std;
int main ()
{
	int  n,sum;
	cout<<"\nEnter a six digit number\n";
	cin>>n;
	
	cout<<n%10<<endl;
	cout<<n%100/10<<endl;
	cout<<n%1000/100<<endl;
	cout<<n%10000/1000<<endl;
	cout<<n%100000/10000<<endl;
	cout<<n%1000000/100000<<endl;
	sum=n%10+n%100/10+n%1000/100+n%10000/1000+n%100000/10000+n%1000000/100000;
	cout<<"\nThe sum of digits is "<<sum;
	
  return 0;
 }


