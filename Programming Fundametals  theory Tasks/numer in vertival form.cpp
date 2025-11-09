
#include <iostream>

using namespace std;
int main ()
{
  int num;
	cout<<"Enter a six digit integer number"<<endl;
	cin>>num;
	
	cout<<"\t\t"<<num%10<<endl;
	cout<<"\t\t"<<num%100/10<<endl;
	cout<<"\t\t"<<num%1000/100<<endl;
	cout<<"\t\t"<<num%10000/1000<<endl;
	cout<<"\t\t"<<num%100000/10000<<endl;
	cout<<"\t\t"<<num%1000000/100000<<endl;
	

  return 0;
 }


