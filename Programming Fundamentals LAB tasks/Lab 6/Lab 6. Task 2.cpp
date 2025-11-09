#include <iostream>
using namespace std;
int main ()
{
	int No_of_students, No_of_scores, score;
	double average;
	cout<<"The program averages test scores. \n\n";
	cout<<"\n For how many students do you have scores?  ";
	cin>>No_of_students;
	
	cout<<"\n How many test scores does each student have?  ";
	cin>>No_of_scores;
	
	for (int h=1; h<=No_of_students; h++)
	{
		double sum=0;
		for(int i=1; i<=No_of_scores;i++)
		{ 
		
			cout<<"Enter score "<<i<<" for student "<<h<<" :";
			cin>>score;
			sum+=score;
		}	
		average=sum/No_of_scores;
		cout<<"\n The average score for student "<<h<<" is "<<average;
		cout<<endl;
	}
	


return 0;
} 

