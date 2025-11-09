#include <iostream>
#include <cstring>
using namespace std;
int words(char str[])
{
	int word=1;	
	for(int i=0; i<strlen(str); i++)
	{
		if(str[i]==' ')
		word++;
	}
return word;
}

void search(char str[])  
{
    string word;
    string srch;
    cout << "\nEnter a word for searching: ";
    cin >> srch;
    bool found = false;
    for (int i = 0; i < strlen(str); i++)
	 {
        if (str[i] != ' ') 
		{
            word += str[i];
        } 
		else
		 {
            if (word == srch)
			{
                found = true;
                break;
            }
            word = "";
        }
    }
    if (word == srch) {
        found = true;
    }
    if (found) 
	{
        cout << "Found";
    } else
	{
        cout << "Not Found";
    }
}

int main ()
{
	char str[]= "I am student of Sukkur IBA University";

cout<<endl;
	for(int i=0; i<strlen(str); i++)
	{
		cout<<str[i];
	}
	cout<<"\nWords in the string are : "<<words(str)<<endl;
	search(str);

return 0;
}


