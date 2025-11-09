
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
  
  if(ans=='C')
  {
  	cout<<"\nCorrect";
  	score=score+10;
  	cout<<"\nYour score is "<<score;
  	cout<<"\n\n\nQ#2. What is capital city of Iran ?\n";
  	cout<<"\tA. Tehran";
  	cout<<"\tB. Baghdad";
  	cout<<"\tC. Kabul";
  	cout<<"\tD. Dhaka";
  	cout<<"\n\nYour answer is...";
  	cin>>ans;
  	if(ans=='A')
  	{
  		cout<<"\nCorrect";
  		score=score+10;
  	   	cout<<"\nYour current score is "<<score;
  	   	cout<<"\n\n\nQ#3. When war of Independence was fought ?\n";
   		cout<<"\tA. 1757";
      	cout<<"\tB. 1758";
     	cout<<"\tC. 1858";
  	    cout<<"\tD. 1857";
  	    cout<<"\n\nYour answer is...";
  	    cin>>ans;
  	    if(ans=='D')
  	    {
  	    	cout<<"\nCorrect";
  	    	score=score+10;
  	     	cout<<"\nYour current score is "<<score;
  	    	cout<<"\n\n\nQ#4. Which is largest province of Pakistan by population ?\n";
   	    	cout<<"\tA. Sindh";
        	cout<<"\tB. Punjab";
        	cout<<"\tC. Balochistan";
  	        cout<<"\tD. KPK";
  	        cout<<"\n\nYour answer is...";
  	        cin>>ans;	
  	        if(ans=='B')
  	        {
  	        	cout<<"\nCorrect";
  	        	score=score+10;
  	        	cout<<"\nYour current score is "<<score;
  	    	    cout<<"\n\n\nQ#5. which is second largest city of Pakistan ?\n";
   	        	cout<<"\tA. Karachi";
        	    cout<<"\tB. Lahore";
        	    cout<<"\tC. Multan";
  	            cout<<"\tD. Islamabad";
  	            cout<<"\n\nYour answer is...";
  	            cin>>ans;
  	            if(ans=='B')
  	            {
  	            	cout<<"\nCorrect";
  	            	score=score+10;
  	        	    cout<<"\nYour current score is "<<score;
  	    	        cout<<"\n\n\nQ#6. What is capital city of Chile?\n";
   	        	    cout<<"\tA. Santiago";
        	        cout<<"\tB. Beging";
        	    	cout<<"\tC. Dublin";
  	            	cout<<"\tD. Washington DC";
  	            	cout<<"\n\nYour answer is...";
  	            	cin>>ans;
  	            	if(ans=='A')
  	            	{
  	            		cout<<"\nCorrect";
  	            		score=score+10;
  	        	    	cout<<"\nYour current score is "<<score;
  	    	        	cout<<"\n\n\nQ#7. What is currency of America?\n";
   	        	   		cout<<"\tA. Rupee";
        	        	cout<<"\tB. Yen";
        	    		cout<<"\tC. Dollar";
  	            		cout<<"\tD. Rial";
  	            		cout<<"\n\nYour answer is...";
  	            		cin>>ans;
  	            		if(ans=='C')
  	            		{
  	            			cout<<"\nCorrect";
  	            			score=score+10;
  	        	    	    cout<<"\nYour current score is "<<score;
  	        	    	    cout<<"\n\n\nQ#8. Who was the first prime minister of Pakistan?\n";
   	        	   			cout<<"\tA. Liaqat Ali Khan";
        	        		cout<<"\tB. Muhammad Ali Jinnah";
        	    			cout<<"\tC. Allama Muhammad Iqbal";
  	            			cout<<"\tD. Sir Ahmed Khan";
  	            			cout<<"\n\nYour answer is...";
  	            			cin>>ans;
  	            			if(ans=='A')
  	            			{
  	            				cout<<"\nCorrect";
  	            				score=score+10;
  	        	    			cout<<"\nYour current score is "<<score;
  	        	    	        cout<<"\n\n\nQ#9. which is national animal of Pakistan?\n";
   	        	   				cout<<"\tA. Lion";
        	        			cout<<"\tB. Goat";
        	    				cout<<"\tC. Markhor";
  	            				cout<<"\tD. Cow";
  	            				cout<<"\n\nYour answer is...";
  	            				cin>>ans;
  	            				if(ans=='C')
  	            				{
  	            					cout<<"\nCorrect";
  	            					score=score+10;
  	        	    			    cout<<"\nYour current score is "<<score;
  	        	    	       		cout<<"\n\n\nQ#10. which is national game of Pakistan  ?\n";
   	        	   					cout<<"\tA. Cricket";
        	        				cout<<"\tB. Football";
        	    					cout<<"\tC. Hockey";
  	            					cout<<"\tD. Volly Ball";
  	            					cout<<"\n\nYour answer is...";
  	            					cin>>ans;
  	            					if(ans=='C')
  	            					{
  	            						cout<<"\Perfect";
  	            						score=score+10;
  	        	    			     cout<<"\n\nCongratulations, You have cleared the Quiz With 100%\n Your score is "<<score<<"  out of  hundred";
									}
									else
									{
										cout<<"\nwrong";
	  	        			            cout<<"\nYour score is "<<score;
	  	        			            cout<<"\nGame over";
	    					    		
									}
								}
								else
								{
									cout<<"\nwrong";
	  	        			        cout<<"\nYour score is "<<score;
	    					    	cout<<"\nGame over";
								}
							}
							else
							{
								cout<<"\nwrong";
	  	        			    cout<<"\nYour score is "<<score;
	    						cout<<"\nGame over";
							}	
  	            		}
  	            		else
  	            		{
  	            			cout<<"\nwrong";
	  	        			cout<<"\nYour score is "<<score;
	    					cout<<"\nGame over";
						}
					}
					  	else
					  {
					  	cout<<"\nwrong";
	  	        		cout<<"\nYour score is "<<score;
	    				cout<<"\nGame over";	
					  }
  	            }
  	            else
  	            {
  	            	cout<<"\nwrong";
	  	        	cout<<"\nYour score is "<<score;
	    			cout<<"\nGame over";	
				}
  	       }
			else
			{
				cout<<"\nwrong";
	  	        cout<<"\nYour score is "<<score;
	    	    cout<<"\nGame over";
			}
  	        
		}
		else
		{
     		cout<<"\nwrong";
	  	    cout<<"\nYour score is "<<score;
	    	cout<<"\nGame over";
		}
    }
	  else
	  {
	  	cout<<"\nwrong";
	  	cout<<"\nYour score is "<<score;
	  	cout<<"\nGame over";
	  }
  }
  else
  {
  	cout<<"\nYou lost !!";
  	cout<<"\nYour Score is "<<score;
  	cout<<"\nGame over";
  }
  
  


  return 0;
 }

