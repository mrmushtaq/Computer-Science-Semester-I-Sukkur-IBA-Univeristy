#include <iostream>
using namespace std;
int main ()
{
	int guess, attempt=5;
	int i=0;
	while ( i<=attempt)
	{
		if(attempt==0)
		{
			cout<<"\n\n\nSorry! You lost the Quiz.";
			cout<<"\nThe Actual number is 49 ";
			break;
		}
		else
		{
			cout<<"\n Guess the number, Enter your guess: ";
			cin>>guess;
			
				if(guess<49)
					{
						cout<<"\nYour guessed number is smaller than the actual number. ";
						attempt-=1;
					}
				else if(guess>49)
					{
						cout<<"\nYour guessed number is greater than the actual number. ";
						attempt-=1;
					}
				else if (guess==49)
					{
						cout<<"\nCongratulations!!, You guessed the number. "<<49;
						break;
					}
		}			
		
	}


return 0;
}


