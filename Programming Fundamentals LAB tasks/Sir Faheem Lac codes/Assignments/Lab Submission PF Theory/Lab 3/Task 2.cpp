#include<iostream>
using namespace std;
int main()
{
	int per;
	cout<<"\nEnter your percentage\n";
	cin>>per;

       if(per>=90 && per<=100)
	cout<<"\nYour Grade is A1";
       else if (per>=80 && per<90)
	cout<<"\nYour Grade is A";
       else if (per>=70 && per<80)
	cout<<"\nYour Grade is B";
       else if (per>=60 && per<70)
	cout<<"\nYour Grade is C";
       else if (per>=0 && per<60)
	cout<<"\nFail";
       else
	cout<<"\nInvalid Entry\n\n";
return 0;
}

