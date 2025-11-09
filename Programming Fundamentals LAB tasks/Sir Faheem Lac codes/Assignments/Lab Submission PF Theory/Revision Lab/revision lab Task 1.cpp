#include<iostream>
using namespace std;
char AmORpm(int num1, int num2);
int function_conversion(int num1);

int main()
{
	char ask;
	do
	{
		int num1, num2;
		cout<<"Please input time.\n";
		cout<<"Enter Hours: ";
		cin>>num1;
		cout<<"Enter minutes : ";
		cin>>num2;
		
		if(num1>0  && num1<=12 && num2>=0 && num2<=59)
		{
			char result=AmORpm(num1, num2);
			cout<<"\nThe time is "<<num1<<":"<<num2<<" "<<result;
		}
		
		else if(num1>12  && num1<24 && num2>=0 && num2<=59)
		{
			char result=AmORpm(num1, num2);
			int convert=function_conversion(num1);
			cout<<"\nThe time is "<<convert<<":"<<num2<<" "<<result;	
		}
		else if(num1==0 && num2>=0 && num2<=59)
			cout<<"\nThe time is "<<12<<":"<<num2<<" A";
		else if(num1>=24 || num1<0)
		cout<<"\nInvalid Entry..\nHours cannot be greater than or equal to 24 or negative.";
		else if(num2>59 || num2<0)
		cout<<"\nInvalid Entry..\nMinutes cannot be greater than 59 or negative.";
	
		cout<<"\n\nDo you want to continue (press y/n) ? ";
		cin>>ask;
	}
	while (ask=='y');
	
		return 0;
		}
		
		char AmORpm(int num1, int num2)
		{	
			if(num1>0 && num1<12)
				{
					return 'A';
				}
			else if(num1>=12 && num1<24)
				{
					return 'P';		
				}
			else if(num1==0)
				return 'A';
				
		}
		
		int function_conversion(int num1)
		{
			int convert=num1-12;
			return convert;
		}
		

