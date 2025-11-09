#include<iostream>
using namespace std;
int main()
{

	int num;
		cout<<"Enter month number"<<endl;
		cin>>num;
	
	switch(num)
	{
		case 12:
		case  1:
		case 2:
			cout<<"\nIt is a Winter season. \n\n";
			break;
		case 3:
		case 4:
			cout<<"\nIt is a Spring season. \n\n";
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			cout<<"\nIt is a Summer season. \n\n";
			break;
		case 10:
		case 11:
			cout<<"\nIt is a Autumn season. \n\n";
			break;
		default:
			cout<<"\nInvalid Entry"<<"\n\n";	
		
	}
	
system("PAUSE");
return 0;
}

