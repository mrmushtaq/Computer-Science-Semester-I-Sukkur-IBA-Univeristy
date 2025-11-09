
#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
	
	ofstream fout;
 int vowel_count = 0, word_count=1;
 
	string line;
	fout.open("MyDairy.txt");

cout<<"Enter data to store it in my diary.";
cout<<"\nAt the end Press -1 to close the Program\n\n";
	while (fout) 
	{
		getline(cin, line);

		if (line == "-1")
			break;
		fout << line << endl;
	}

	fout.close();
	
	ifstream fin;
	fin.open("MyDairy.txt");

	while (getline(fin, line)) 
	{
		for(int i=0; i<line.length(); i++)
		{ 
   			if(line[i]=='a' || line[i] =='A' || line[i] =='e' || line[i]=='E' || line[i] =='i' || line[i]=='I' || line[i] =='o' || line[i]=='O' || line[i] =='u' || line[i]=='U')  
	   		vowel_count+=1;
  		}  
  
		for(int i=0; i<line.length(); i++) 
		{ 
		   	if(line[i] ==' ') 
		   	  word_count+=1;	 
  		}
  		
		cout <<endl<< line << endl;
	}
	fin.close();

	cout<<"Vowel in My Dairy are  : "<<vowel_count<<endl;
	cout<<"Words in My Dairy are  : "<<word_count<<endl;
	
	return 0;
}

