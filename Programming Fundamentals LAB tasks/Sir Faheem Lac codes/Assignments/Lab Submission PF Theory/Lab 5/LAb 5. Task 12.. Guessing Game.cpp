#include <iostream>
using namespace std;
int main ()
{
	int guess;
	int i=1;
	while ( i<=0 || i>0)
	{
		cout<<"\n Guess the number, Enter your guess: ";
		cin>>guess;
			
			if(guess<49)
				cout<<"\nYour guessed number is smaller than the actual number. ";
			else if(guess>49)
					cout<<"\nYour guessed number is greater than the actual number. ";	
			else if (guess==49)
				{
					cout<<"\nCongratulations!!, You guessed the number. "<<49;
					break;
				}
				
			i++;					
	}


return 0;
}


