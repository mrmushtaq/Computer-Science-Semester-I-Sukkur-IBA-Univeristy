#include<iostream>
#include<string>
using namespace std;
string my_upper(string input);
int main ()
{
	string input;
	cout<<"Enter string value :  ";
	getline(cin,input);
		
	string UpperCase=my_upper(input);
	cout<<"Your string in Upper case : "<<UpperCase;
		
return 0;
}

string my_upper(string input)
{
	string UpperCase;
	for(int i=0; i<input.length(); i++)
		{
			if(input[i]>=97 && input[i]<=122)  // a=97 ,  z=122
			{	
			input[i]-=32;  // because different b/w small and capital letters in ASCII code is 32
			UpperCase+=input[i];
			}
			else
			UpperCase+=input[i];
		}
		
		return UpperCase;
		
}


