#include<iostream>
double Conversion_withp(double);
double Conversion_wp(void);

using namespace std;

int main ()
{
double c,f;
/*
cout<<"\n Enter F :  Temp : ";
cin>>f;
*/
c = Conversion_withp(78);

cout<<endl<<f<<"  F  to "<<c<<" C ";


//c = Conversion_wp();
cout<<"  C "<<c;



 return 0;
 }

double Conversion_withp(double f)
{
	
	double c;
//	c/5 = f-32/9
	c = ((f-32)/9)*5;
	
	return c;
}


double Conversion_wp()
{
double c,f;

cout<<"\n Enter F :  Temp : ";
cin>>f;
	
	c = ((f-32)/9)*5;
	
	return c;
}
