#include<iostream>
using namespace std;
int main()
{

	int num;
		cout<<"Enter month number"<<endl;
		cin>>num;
	
	switch(num)
	{
		case 1:
			cout<<"\n\tThe 1st month is January\n\n";
			break;
		case 2:
			cout<<"\n\tThe 2nd month is February\n\n";
			break;
		case 3:
			cout<<"\n\tThe third month is March\n\n";
			break;
		case 4:
			cout<<"\n\tThe fourth month is April\n\n";
			break;
		case 5:
			cout<<"\n\tThe Fifth month is May\n\n";
			break;
		case 6:
			cout<<"\n\tThe Sixth month is June\n\n";
			break;
		case 7:
			cout<<"\n\tThe Seventh month is July\n\n";
			break;
		case 8:
			cout<<"\n\tThe Eighth month is August\n\n";
			break;
		case 9:
			cout<<"\n\tThe Ninth month is September\n\n";
			break;
		case 10:
			cout<<"\n\tThe tenth month is October\n\n";
			break;
		case 11:
			cout<<"\n\tThe eleventh month is November\n";
			break;
		case 12:
			cout<<"\n\tThe Twelvith month is December\n\n";
			break;
		default:
			cout<<"\nInvalid Entry"<<"\n\n";	
		
	}
	
system("PAUSE");
return 0;
}

