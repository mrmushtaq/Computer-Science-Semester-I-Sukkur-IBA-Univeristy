#include <iostream>
using namespace std;
int main ()
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
	cout<<"Your obtained marks are "<<obtainm;

	cout<<"\n";

	per=obtainm/500*100;
	cout<<"Your percentage is "<<per<<endl;

	return 0;
}

