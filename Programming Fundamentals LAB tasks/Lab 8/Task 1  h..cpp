#include<iostream>
using namespace std;
int Findsum(int num);
int main()
{
	int num;
	cout<<"Enter a range upto which you want to find sum : ";
	cin>>num;
		
	int sum=Findsum(num);

	cout<<endl<<"The sum of all "<<num<<" positive integers is "<<sum;
}

int Findsum(int num)
{
	int sum=0;
	for(int i=num; i>0;i--)
	sum+=i;
	
	return sum;
}
