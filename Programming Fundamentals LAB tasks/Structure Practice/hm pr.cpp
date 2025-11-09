#include <iostream>
using namespace std;

struct team {
    string Tname;
    string gameformat;
    int Tranking;
};

struct player {
    string p_name;
    int p_jersey_no;
    string p_format;
};

int main() {
	int ask;
	string search;
    team t;
    t.Tname = "Pakistan";
    t.gameformat = "T20";
    t.Tranking = 2;

    cout << "Team Name : " << t.Tname << endl;
    cout << "Game format : " << t.gameformat << endl;
    cout << t.Tname << "'s Ranking in " << t.gameformat << " : " << t.Tranking << endl;

    player p[11] = {
        {"Imam", 1, "Batting"},
        {"Fakhar", 2, "Batting"},
        {"Babar", 3, "Batting"},
        {"Rizwan", 4, "Wicket Keeper"},
        {"Asif", 5, "Batting"},
        {"Iftikhar", 6, "Batting"},
        {"Shadab", 7, "All rounder"},
        {"Imad", 8, "All rounder"},
        {"Shaheen", 9, "Bowling"},
        {"Naseem", 10, "Bowling"},
        {"Rauf", 11, "Bowling"}
    };

    cout << "Player name\tJersey No\tFormat" << endl;
    for (int i = 0; i < 11; i++)
        cout << p[i].p_name << "\t" << p[i].p_jersey_no << "\t\t" << p[i].p_format << endl;
        
        
    cout<<"\n\nDo you want to search any data ? : ";
    cout<<"\nEnter 1 for yes or 0 for no : ";
    cin>>ask;
    
    if(ask==1)
    {
    	cout<<"\nWhat do want to search ? :";
    	cout<<"\nEnter choice 1/2/3/0 : ";
    	cout<<"\n1. Search by Player name\n2. Search by Player Jercy Number\n3.Search by Player Format  : ";
    	cin>>ask;
    	if(ask==1)
    	{
    		cout<<"Enter player name : ";
    		cin>>search;
    		
    		for(int i=0; i<11; i++)
    		{
    			if(search==p[i].p_name)
    			{
    				cout << "\nname\tJersey No\tFormat" << endl;
    				cout << p[i].p_name << "\t" << p[i].p_jersey_no << "\t\t" << p[i].p_format << endl;
    				break;
				}

			}
		}
	 else if(ask==2)
    	{
    		int temp;
    		cout<<"Enter player jercy number : ";
    		cin>>temp;
    		
    		for(int i=0; i<11; i++)
    		{
    			if(temp==p[i].p_jersey_no)
    			{
    				cout << "\nname\tJersey No\tFormat" << endl;
    				cout << p[i].p_name << "\t" << p[i].p_jersey_no << "\t\t" << p[i].p_format << endl;
    				break;
				}

			}
		}
		if(ask==3)
	    {
	    	int temp;
	    	cout<<"Enter player Format (batting ,bowling etc..) : ";
	    	cin>>temp;
		
	    	for(int i=0; i<11; i++)
	    	{
	   			if(temp==p[i].p_jersey_no)
	   			{
	   				cout << "name\tJersey No\tFormat" << endl;
	   				cout << p[i].p_name << "\t" << p[i].p_jersey_no << "\t\t" << p[i].p_format << endl;
				}	
			}

		}
	}

    return 0;
}

