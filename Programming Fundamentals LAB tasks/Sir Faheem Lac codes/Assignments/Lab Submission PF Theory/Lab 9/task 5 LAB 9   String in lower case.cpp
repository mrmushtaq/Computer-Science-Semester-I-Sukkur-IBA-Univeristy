#include<iostream>
#include<string>
using namespace std;
string my_lower(string input);
int main ()
{
	string input;
	cout<<"Enter string value :  ";
	getline(cin,input);
		
	string LowerCase=my_lower(input);
	cout<<"Your string in lower case : "<<LowerCase;
		
return 0;
}

string my_lower(string input)
{
	string LowerCase;
	for(int i=0; i<input.length(); i++)
		{
			if(input[i]>=65 && input[i]<97)
			{	
			input[i]+=32;  // because different b/w small and capital letters is 32
			LowerCase+=input[i];
			}
			else
			LowerCase+=input[i];
		}
		
		return LowerCase;		
}
