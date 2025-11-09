
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char ans;
	int score=0;
	
  cout<<"Welcome to the Quiz App\n\n\n";
  cout<<"Enter the correct answer (A,B,C,D), each question carry 10 marks\n\n";
  cout<<"Q#1. Who is current Prime Minister of Pakistan  ?\n";
  cout<<"\tA. Shahbaz Sharif.";
  cout<<"\tB. Imran Khan.";
  cout<<"\tC. Mr. Anwar Ul Haq.";
  cout<<"\tD. Nawaz Sharif.";
  cout<<"\n\nYour answer is ....";
  cin>>ans;
 if(ans=='C' || ans=='c')
 	{
	 score=score+10;
 	 cout<<"\nCorrect\n Your current score is "<<score;
    }
 else
 	{
 		cout<<"\nWrong\n You have still two chances to continue the quiz.";
 	}
 	
		cout<<"\nQ#2. When Quaid Azam died ?\n";
  		cout<<"\tA. 1878";
  		cout<<"\tB. 1950";
  		cout<<"\tC. 1947";
  		cout<<"\tD. 1948";
  		cout<<"\n\nYour answer is ....";
  		cin>>ans;
		 if(ans=='D' || ans=='d')
 		{
			score=score+10;
 	 		cout<<"\nCorrect\n Your current score is "<<score;
    	}
 			else
 			{
 				cout<<"\nWrong\n You have now last chance to continue the quiz.";
 			}
 				
 				cout<<"\nQ#3 Which city of Pakistan is known as city of saints ?\n";
 				cout<<"\tA. Lahore";
		  		cout<<"\tB. Multan";
		  		cout<<"\tC. Peshawar";
		  		cout<<"\tD. Islamabad";
		  		cout<<"\n\nYour answer is ....";
		  		cin>>ans;
				 if(ans=='B' || ans=='b')
		 		{
					score=score+10;
		 	 		cout<<"\nCorrect\n Your current score is  "<<score;
		    	}
		 			else
 						{
 						cout<<"\nWrong\n You lost\n Game over.";
 						}
 						
 	cout<<"\nQ#4 Which city of Pakistan is known as city of lights ?\n";
	cout<<"\tA. Karachi";
	cout<<"\tB. Lahore";
	cout<<"\tC. Peshawar";
	cout<<"\tD. Islamabad";
	cout<<"\n\nYour answer is ....";
	cin>>ans;	
	if(ans=='A' ||  ans=='a')
	{
	 		score=score+10;
 		cout<<"\nCorrect\n Your current score is  "<<score;
		cout<<"\nQ#5 Which city of Pakistan is known as city of perfumes ?\n";
		cout<<"\tA. Sialkot";
		cout<<"\tB. Hayderabad";
		cout<<"\tC. Peshawar";
		cout<<"\tD. Islamabad";
		cout<<"\n\nYour answer is ....";
		cin>>ans;	
		if(ans=='B' ||  ans=='b')	
		{
			score=score+10;
	 		cout<<"\nCorrect\n Your current score is  "<<score;
			cout<<"\nQ#6 What is capital city of Austria ?\n";
			cout<<"\tA. Baku";
			cout<<"\tB. Manama";
			cout<<"\tC. Viena";
			cout<<"\tD. Beijing";
			cout<<"\n\nYour answer is ....";
			cin>>ans;	
			if(ans=='C' ||  ans=='c')
			{
				score=score+10;
		 		cout<<"\nCorrect\n Your current score is  "<<score;
				cout<<"\nQ#6 What is capital city of Spain ?\n";
				cout<<"\tA. Baku";
				cout<<"\tB. Dublin";
				cout<<"\tC. Madrid";
				cout<<"\tD. Beijing";
				cout<<"\n\nYour answer is ....";
				cin>>ans;	
				if(ans=='C' ||  ans=='c')
				{
					score=score+10;
			 		cout<<"\nCorrect\n Your current score is  "<<score;
					cout<<"\nQ#8 What is capital city of Turkey ?\n";
					cout<<"\tA. Ankara";
					cout<<"\tB. Canberra";
					cout<<"\tC. Madrid";
					cout<<"\tD. Kampala";
					cout<<"\n\nYour answer is ....";
					cin>>ans;	
					if(ans=='A' ||  ans=='a')
					{
						score=score+10;
			 			cout<<"\nCorrect\n Your current score is  "<<score;
			 			cout<<"\nQ#9 What is chemical symbol of Iron ?\n";
						cout<<"\tA. I";
						cout<<"\tB. Fe";
						cout<<"\tC. Fg";
						cout<<"\tD. Ag";
						cout<<"\n\nYour answer is ....";
						cin>>ans;	
						if(ans=='B' ||  ans=='b')
						{
							score=score+10;
			 				cout<<"\nCorrect\n Your current score is  "<<score;
				 			cout<<"\nQ#10 How many districts are there in Pakistan ?\n";
							cout<<"\tA. 150";
							cout<<"\tB. 148";
							cout<<"\tC. 152";
							cout<<"\tD. 154";
							cout<<"\n\nYour answer is ....";
							cin>>ans;	
							if(ans=='D' ||  ans=='d')
							{
								score=score+10;
			 			     	cout<<"\nCorrect\n Congratulations, You have successfully cleared  the quiz, Your score is "<<score<<" out of 100";
							}
							else
							{
								cout<<"\nWrong\n Your score is  "<<score<<" out of 100  \nGame over";
							}

						}
						else
						{
							cout<<"\nWrong\n Your score is  "<<score<<" out of 100  \nGame over";
						}

					}
					else
					{
						cout<<"\nWrong\n Your score is  "<<score<<" out of 100  \nGame over";
					}
				}
				else
				{
					cout<<"\nWrong\n Your score is  "<<score<<" out of 100  \nGame over";	
				}
			}
			else
			{
				cout<<"\nWrong\n Your score is  "<<score<<" out of 100  \nGame over";	
			}	
		
		}
		else
		{
			cout<<"\nWrong\n Your score is  "<<score<<" out of 100 \nGame over";
		}
	}	
	else
	{
		cout<<"\nWrong\n Your score is  "<<score<<" out of 100 \nGame over";	
	}			
 								
  return 0 ;
 }

