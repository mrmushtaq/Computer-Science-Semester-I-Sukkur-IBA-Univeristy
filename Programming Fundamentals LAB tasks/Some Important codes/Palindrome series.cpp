#include <iostream>
using namespace std;
int main ()
{
	
	/*
Write a C++ program to check if a given string is a palindrome. A palindrome is a word, phrase, or sequence of characters that reads the same backward as forward. The program should:

Allow the user to enter a string.
Check if the entered string is a palindrome.
Display the result (whether it's a palindrome or not).	
	*/
	string str, tem="", rev="";
	cout<<"Enter any string to check wheather is palandrome or not : ";
	getline(cin,str);
	
	for(int i=0; i<str.length(); i++)
		tem+=str[i];
			
	for(int i=str.length()-1; i>=0; i--)
		rev+=str[i];
	
	if(rev==tem)
	cout<<"\nString is Palindrome";
	else
	cout<<"\nIt is not a Palindrome series";


return 0;
}


