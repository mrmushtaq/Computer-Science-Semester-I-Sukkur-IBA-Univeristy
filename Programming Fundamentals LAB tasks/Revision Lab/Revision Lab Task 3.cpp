#include <iostream>
using namespace std;
bool isLeapYear(int year);
int getCenturyValue(int year);
int getYearValue(int year);
int getMonthValue(string month, int year);
int main ()
{
	int day, year, sum , rem;
	string month;
	
	cout<<"Note: The first letter of month must be 'Capital' and all other letters must be 'small'\n\n";
	cout<<"Enter month date and year (i.e. July 4 2004) \n";
	cin>>month>>day>>year;
	
	bool check=isLeapYear(year);

	if((month=="April" ||month=="June" ||month=="September" ||month=="November") && day>30)
		cout<<"\n"<<month<<" has maximum 30 days\nInvalid Entry";
	else if(month=="February" && day>28 && check==false)
		cout<<"\n"<<month<<" has maximum 28 days because Year is not a leap year \nInvalid Entry";
	else if(month=="February" && day>29 && check==true)
		cout<<"\n"<<month<<" has has maximum 29 days in a leap year\nInvalid Entry";
	else if((month=="January" ||month=="March" ||month=="May" ||month=="July" ||month=="August" ||month=="October" || month=="December")&& day>31)
			cout<<"\n"<<month<<" has has maximum 31 days \nInvalid Entry";
	else if(month=="January" || month=="February" ||month=="March" ||month=="April" ||month=="May" ||month=="June" ||month=="July" ||month=="August" ||month=="September" ||month=="October" ||month=="November" ||month=="December")
	{
		
		 int MonthValue=getMonthValue(month,year);
		 int YearValue=getYearValue(year);
		 int CenturyValue=getCenturyValue(year);
		 if(day>=1 && day<=31 && MonthValue!=100 )	
		 {
			 	sum=day + MonthValue + YearValue + CenturyValue ;
			rem=sum%7;
			
			if(rem==0)
				cout<<"The day will be Sunday ";
			else if(rem==1)
				cout<<"The day will be Monday ";
			else if(rem==2)
				cout<<"The day will be Tuesday ";
			else if(rem==3)
				cout<<"The day will be Wednesday ";	
			else if(rem==4)
				cout<<"The day will be Thursady";	
			else if(rem==5)
				cout<<"The day will be Friday ";
			else if(rem==6)
				cout<<"The day will be Saturday ";
		}
	}
	else
	cout<<"\nInvalid Entry";
	
return 0;
}

bool isLeapYear(int year)
{
	if(year%4==0 && year%100!=0)
	return true ;
	else
	return false;
}

int getCenturyValue(int year)
{
	int first2Digits , rem, result;
	first2Digits=year%10000/100;
	
	rem=first2Digits%4;
	result=(3-rem)*2;
		
	return result;
}

int getYearValue(int year)
{	
	int last2Digits , rem, result;
	last2Digits=year%100;
	
	result=(last2Digits/4) + last2Digits;
		
	return result;
	
}

int getMonthValue(string month, int year)
{
	if((month=="January" && year%4!=0) || month=="October" )
		{
			return 0;
		}
	if((month=="January" && (year%4==0 && year%100!=0) ) || month=="April" || month=="July")
		{
			return 6;
		}
	if((month=="February" && year%4!=0) || month=="March" || month=="November" )
		{
			return 3;
		}
	if((month=="February" &&  (year%4==0 && year%100!=0)) || month=="August")
		{
			return 2;
		}
	if(month=="May")
		{
			return 1;
		}
	if(month=="June" )
		{
			return 4;
		}
	if(month=="September" || month=="December" )
		{
			return 5;
		}
	else
		{
			return 100;    // here 100 is any temporary value and shows that month is invalid
		}
		
}
