#include<iostream>
#include<string>
using namespace std;
int Findwords (string line);
int main ()
{
	string line;
	cout<<"Enter a string which must contain one space and have no space in last : ";
	getline(cin, line);
	int result=Findwords(line);
	cout<<endl<<"The number of words in string is "<<result;
	
return 0;
}

int Findwords (string line)
{
	int  word=1;
	for(int i=0; i<line.length(); i++)
	{
		if(line[i]==' ')
		 	word+=1;
	}
		
	return word;	
}

