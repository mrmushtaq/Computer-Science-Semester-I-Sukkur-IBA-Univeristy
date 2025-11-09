#include <iostream>
#include <string>
using namespace std;
struct student
{
	int id;
	string name;
	int*marks;
};

void inputStudent(student*ptr, int marks)
{
	cout<<"Enter ID of Student : ";
	cin>>ptr->id;
	
	 cin.ignore();
 	cout << "Enter student name: ";
    getline(cin,ptr->name);
   
	
	ptr->marks= new int[marks];
	cout<<"Enter marks of "<<marks<<" subjects : \n";
	
	for(int i=0; i<marks; i++)
	{
		cout<<"Marks for subject "<<i+1<<" : ";
		cin>>ptr->marks[i];
	}
	cout<<endl;

}

void display(student*ptr, int marks)
{
	cout<<"Student ID : "<<ptr->id;
	cout<<"\nStudent name : "<<ptr->name;
	cout<<"\nMarks of "<<marks<<" subjects : \n";
	
	for(int i=0; i<marks; i++)
	{
		cout<<"\nMarks for subject "<<i+1<<" : "<<ptr->marks[i];
	}
	cout<<endl;

}

void deletememory(student*ptr)
{
	delete[] ptr->marks;
}

int main ()
{
	int marks;
	cout<<"Enter number of subject marks : ";
	cin>>marks;
	
	
	student stu;
	student*ptr=&stu;
	
	inputStudent(ptr, marks);
	display(ptr,marks);
	deletememory(ptr);
	

	return 0;
}

