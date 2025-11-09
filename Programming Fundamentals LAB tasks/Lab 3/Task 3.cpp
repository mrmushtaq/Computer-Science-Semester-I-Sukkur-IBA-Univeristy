#include <iostream>
using namespace std;
int main()
{
	
	int eng, ict, math, phy, prog;
	float obtainm, per;

	cout<<"Enter your English marks"<<endl;
	cin>>eng;

	cout<<"Enter your ICT marks"<<endl;
	cin>>ict;

	cout<<"Enter your math marks"<<endl;
	cin>>math;

	cout<<"Enter your physics marks"<<endl;
	cin>>phy;

	cout<<"Enter your programming marks"<<endl;
	cin>>prog;

	cout<<"\n";
 
	obtainm=eng+ict+math+phy+prog;
	cout<<"Your obtained marks are "<<obtainm<<" out of 500"<<endl;

	per=obtainm/500*100;
	cout<<"Your percentage is "<<per<<endl;

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

