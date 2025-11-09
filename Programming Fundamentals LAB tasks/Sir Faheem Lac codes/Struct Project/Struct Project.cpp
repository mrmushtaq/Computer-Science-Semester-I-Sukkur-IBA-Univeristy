#include <iostream>
using namespace std;

struct team 
{
    string Tname;
    string gameformat;
    int Tranking;
};

struct player 
{
    string p_name;
    int p_jersey_no;
    string p_format;
};

int main() {
    team t;
    t.Tname = "Pakistan";
    t.gameformat = "T20";
    t.Tranking = 2;

    cout << "\tTeam Name : " << t.Tname << endl;
    cout << "\tGame format : " << t.gameformat << endl;
    cout << "\t"<<t.Tname << "'s Ranking in " << t.gameformat << " : " << t.Tranking << endl;

    int MAX_PLAYERS = 20;
    player p[MAX_PLAYERS] = {
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
        {"Haris", 11, "Bowling"},
    };

    int z = 11; // Initial number of players

    int temp1;
    do {
        cout << "\nEnter What do you want to do now ? ";
        cout << "\nEnter your choice 1/2/3/4/5/0 ";
        cout << "\n\n1. Show Pakistan's  Squad: ";
        cout << "\n2. Search any record : ";
        cout << "\n3. Update any record : ";
        cout << "\n4. Delete any record : ";
        cout << "\n5. Add any record : ";
        cout << "\n0. Enter 0 to exit: ";
        cin >> temp1;

        if (temp1 == 1) 
		{
        	cout<<"\n\tPakistan Cricket Team Updated squad\n";
            cout << "\n*******************************************************";
            cout << "\nName\tJersey No\tFormat" << endl;
            cout << "*******************************************************\n";
            for (int i = 0; i < z; i++)
                cout << p[i].p_name << "\t" << p[i].p_jersey_no << "\t\t" << p[i].p_format << endl;
            cout << "*******************************************************\n";
        }
		 else if (temp1 == 2) 
		{
            int temp2;
            cout << "\nWhat do want to search ? :";
            cout << "\nEnter choice 1/2/3/0 : ";
            cout << "\n1. Search by Player name\n2. Search by Player Jercy Number\n3. Search by Player Format  : ";
            cin >> temp2;

            if (temp2 == 1) 
			{
                string temp3;
                cout << "Enter player name : ";
                cin.ignore();
                getline(cin, temp3);

                for (int i = 0; i < z; i++)
				{
                    if (temp3 == p[i].p_name) {
                        cout << "\nPlayer Name: " << p[i].p_name;
                        cout << "\nPlayer Jercy Number: " << p[i].p_jersey_no;
                        cout << "\nPlayer Format: " << p[i].p_format << endl;
                        break;
                    }
                }
            } 
			else if (temp2 == 2)
			 {
                int temp4;
                cout << "Enter player jercy number : ";
                cin >> temp4;

                for (int i = 0; i < z; i++) {
                    if (temp4 == p[i].p_jersey_no) {
                        cout << "\nPlayer Name: " << p[i].p_name;
                        cout << "\nPlayer Jercy Number: " << p[i].p_jersey_no;
                        cout << "\nPlayer Format: " << p[i].p_format << endl;
                        break;
                    }
                }
            } 
			else if (temp2 == 3)
			 {
                string temp5;
                cout << "Enter player Format (Batting ,Bowling etc..) : ";
                cin.ignore();
                getline(cin, temp5);

                for (int i = 0; i < z; i++) {
                    if (temp5 == p[i].p_format) {
                        cout << "\nPlayer Name: " << p[i].p_name;
                        cout << "\nPlayer Jercy Number: " << p[i].p_jersey_no;
                        cout << "\nPlayer Format: " << p[i].p_format << endl;
                    }
                }
            } 
			else
                cout << "\nInvalid Choice\n";

        }
		 else if (temp1 == 3) 
		 {
            int temp2;
            cout << "\nWhat do want to search to update its data ? :";
            cout << "\nEnter choice 1/2: ";
            cout << "\n1. Search by Player name\n2. Search by Player Jercy Number : ";
            cin >> temp2;

            if (temp2 == 1) 
			{
                string temp3;
                cout << "Enter player name : ";
                cin.ignore();
                getline(cin, temp3);

                for (int i = 0; i < z; i++) 
				{
                    if (temp3 == p[i].p_name) 
					{
                        int choice;
                        cout << "\nPlayer Name: " << p[i].p_name;
                        cout << "\nPlayer Jercy Number: " << p[i].p_jersey_no;
                        cout << "\nPlayer Format : " << p[i].p_format;
                        cout << "\n\nWhat do you want to update ? ";
                        cout << "\n1. Player name\n2. Player Jercy Number\n3. Player Format  : ";
                        cin >> choice;
                        if (choice == 1) 
						{
                            cout << "\nEnter name to update : ";
                            cin.ignore();
                            getline(cin, p[i].p_name);
                            cout << "\nName updated successfully \n";
                        }
						 else if (choice == 2) 
						{
                            cout << "\nEnter jercy number to update : ";
                            cin >> p[i].p_jersey_no;
                            cout << "\nJercy number updated successfully \n";
                        } else if (choice == 3) 
						{
                            cout << "\nEnter Format to update : ";
                            cin.ignore();
                            getline(cin, p[i].p_format);
                            cout << "\nplayer format updated successfully \n";
                        } 
						else
                            cout << "\nInvalid Entry, Try again...\n";
                        break;
                    }
                }
            }
			 else if (temp2 == 2) 
			{
                int temp4;
                cout << "Enter player jercy number : ";
                cin >> temp4;

                for (int i = 0; i < z; i++) 
				{
                    if (temp4 == p[i].p_jersey_no) 
					{
                        cout << "\nPlayer Name: " << p[i].p_name;
                        cout << "\nPlayer Jercy Number: " << p[i].p_jersey_no;
                        cout << "\nPlayer Format: " << p[i].p_format << endl;
                        cout << "\n\nWhat do you want to update ? ";
                        cout << "\n1. Player name\n2. Player Jercy Number\n3. Player Format  : ";
                        cin >> temp4;
                        if (temp4 == 1) 
						{
                            cout << "\nEnter name to update : ";
                            cin.ignore();
                            getline(cin, p[i].p_name);
                            cout << "\nName Updated successfully \n";
                        } 
						else if (temp4 == 2) 
						{
                            cout << "\nEnter jercy number to update : ";
                            cin >> p[i].p_jersey_no;
                            cout << "\nJercy Number Updated successfully \n";
                        } 
						else if (temp4 == 3) 
						{
                            cout << "\nEnter Format to update : ";
                            cin.ignore();
                            getline(cin, p[i].p_format);
                            cout << "\nPlayer Format  Updated successfully \n";
                        } 
						else
                            cout << "\nInvalid Entry, Try again...\n";
                        break;
                    }
                }
            }
        } else if (temp1 == 4) 
		{
            int temp2;
            cout << "\nWhat do want to search to delete its data ? :";
            cout << "\nEnter choice 1/2: ";
            cout << "\n1. Search by Player name\n2. Search by Player Jercy Number : ";
            cin >> temp2;
            if (temp2 == 1) 
			{
                string temp3;
                cout << "Enter player name : ";
                cin.ignore();
                getline(cin, temp3);

                for (int i = 0; i < z; i++) 
				{
                    if (temp3 == p[i].p_name) 
					{
                        cout << "\nPlayer Name: " << p[i].p_name;
                        cout << "\nPlayer Jercy Number: " << p[i].p_jersey_no;
                        cout << "\nPlayer Format : " << p[i].p_format;

                        // Deleting data
                        for (int j = i; j < z - 1; j++) 
						{
                            p[j] = p[j + 1];
                        }

                        z--; // Decrement z after deletion
                        cout << "\nPlayer data deleted successfully \n";
                        break;
                    }
                }
            } else if (temp2 == 2) 
			{
                int temp4;
                cout << "Enter player jercy number : ";
                cin >> temp4;

                for (int i = 0; i < z; i++) 
				{
                    if (temp4 == p[i].p_jersey_no) 
					{
                        cout << "\nPlayer Name: " << p[i].p_name;
                        cout << "\nPlayer Jercy Number: " << p[i].p_jersey_no;
                        cout << "\nPlayer Format: " << p[i].p_format;

                        // Deleting data
                        for (int j = i; j < z - 1; j++) 
						{
                            p[j] = p[j + 1];
                        }

                        z--; // Decrement z after deletion
                        cout << "\nPlayer data deleted successfully \n";
                        break;
                    }
                }
            } 
			else
                cout << "\nInvalid Entry, Try again...\n";
        } 
		else if (temp1 == 5) 
		{
            // Add a new record
            if (z < MAX_PLAYERS) 
			{
                cout << "\nEnter details for the new player record:\n";
                cout << "Player Name: ";
                cin.ignore();
                getline(cin, p[z].p_name);
                cout << "Player Jersey Number: ";
                cin >> p[z].p_jersey_no;
                cout << "Player Format (Batting, Bowling, All rounder, etc.): ";
                cin.ignore();
                getline(cin, p[z].p_format);

                cout << "\nNew player record added successfully!\n";
                z++; // Increment the count of players
            } 
			else 
			{
                cout << "\nCannot add more players. Maximum limit reached.\n";
            }
        } 
		else if (temp1 != 0) 
		{
            cout << "\nInvalid choice\n";
        }

    } 
	while (temp1 != 0);

    return 0;
}

