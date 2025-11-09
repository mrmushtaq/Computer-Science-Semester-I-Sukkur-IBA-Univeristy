#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string input, arr, arr2;
	cout<<"Enter string value :  ";
	getline(cin,input);	

		for (int i=0; i<input.length(); i++)
			arr+=input[i];
		
		for(int j=input.length()-1; j>=0; j--)
				arr2+=input[j];
	
		if(arr==arr2)
			cout<<"\nIt is Palindrome Series";	
		else
		cout<<"\nIt's not a Palindrome Series";
				
return 0;
}

