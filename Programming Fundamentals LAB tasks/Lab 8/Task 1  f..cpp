#include<iostream>
using namespace std;
char Findgrade(double per);
int main()
{
	double per;
	cout<<"Enter Percentage : ";
	cin>>per;
		
	char grade=Findgrade(per);
	cout<<"\nThe Grade will be "<<grade<<". ";
}

char Findgrade(double per)
{
	if(per>=60&&per<70)
	return 'C';
	else if(per>=70&&per<80)
	return 'B';
	else if(per>=80&&per<=100)
	return 'A';
	else if(per<60)
	return 'F';
}
