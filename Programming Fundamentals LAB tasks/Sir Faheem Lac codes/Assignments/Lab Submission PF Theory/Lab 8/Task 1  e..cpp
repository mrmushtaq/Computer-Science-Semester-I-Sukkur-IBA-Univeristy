#include<iostream>
using namespace std;
double Findpercentage(int Obmarks, int Totmarks);
int main()
{
	int Obmarks, Totmarks;
	cout<<"Enter Obtained Marks : ";
	cin>>Obmarks;
	cout<<"Enter TotMal arks : ";
	cin>>Totmarks;
		
	double per=Findpercentage(Obmarks, Totmarks);
	cout<<"\nThe percentage will be "<<per<<". ";
}

double Findpercentage(int Obmarks, int Totmarks)
{
	double per =Obmarks*100.0/Totmarks;

	return per;
}
