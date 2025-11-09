#include<iostream>
using namespace std;
void add(int &n1, int &n2, int n3);
int main ()
{
	int no1=5, no2=10, no3=15;
	cout<<"\nIn main.";
	cout<<"\nno1 : "<<no1;
	cout<<"\nno2 : "<<no2;
	cout<<"\nno3 : "<<no3;
	
	add(no1,no2,no3);
	int sum=no1+no2+no3;
	cout<<endl<<"Sum : "<<sum; 


return 0;
}

void add(int &n1, int &n2, int n3)
{
	cout<<"\nIn Function.";
	cout<<"\nno1 : "<<n1;
	cout<<"\nno2 : "<<n2;
	cout<<"\nno3 : "<<n3; 
	
	cout<<"\nIn Function after update value.";
	n1=20;
	n2=30;
	n3=40; 
	cout<<"\nno1 : "<<n1<<" with reference. ";
	cout<<"\nno2 : "<<n2<<" with reference. ";
	cout<<"\nno3 : "<<n3<<" without reference. ";
	
	
}

