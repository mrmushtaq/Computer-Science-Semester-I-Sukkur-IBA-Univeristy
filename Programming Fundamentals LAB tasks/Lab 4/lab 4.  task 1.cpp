#include<iostream>
using namespace std;
int main()
{
	char ans;
	string dep;
	cout<<"\nDo you have student ID card?  (Y/N)\n";
	cin>>ans;
	
	if(ans=='N' || ans=='n')
	cout<<"\nYou are not allowed to enter\n";
	else
		{
			if(ans=='Y' || ans=='y')
			{
				cout<<"\nWhich is you Department? (CS  EE  BBA  EDU)\n";
				cin>>dep;
				if(dep=="CS")
				cout<<"Go to Block 1\n\n";
				else
				{
					if(dep=="EE")
					{
						cout<<"Go to Block 3\n\n";
					}
					else
					{
						if(dep=="BBA")
						{
							cout<<"Go to Block 2\n\n";	
						}
						else
						{
							if(dep=="EDU")
							{
								cout<<"Go to Knowledge Center.\n\n";
							}
		
							else
							{
								cout<<"\nInvalid Entry.\n\n";
							}
						}
					}
				}
			}
		}

system("PAUSE");
return 0;
}

