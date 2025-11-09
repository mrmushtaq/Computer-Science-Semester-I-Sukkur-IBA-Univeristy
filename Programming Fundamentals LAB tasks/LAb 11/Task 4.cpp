#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int id;
    int mark[3];
};

void inputStudent(Student* ptr) 
{
    cout<<"Enter student name: ";
    cin.ignore();
    getline(cin, ptr->name);

    cout<<"Enter student ID: ";
    cin>>ptr->id;

    cout<<"Enter marks for three subjects:" << endl;
    for (int i=0;i<3; i++) 
	{
        cout<<"Mark for subject "<<i+1<<": ";
        cin>>ptr->mark[i];
    }
}

void displayStudent( Student* ptr) 
{
    cout<<"Student Details:"<<endl;
    cout<<"Name: " << ptr->name<<endl;
    cout<<"ID: " << ptr->id<<endl;
    cout<<"Marks for three subjects: ";
    for (int i=0; i<3; i++) 
	{
        cout<<ptr->mark[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    Student stu;
    Student* stuPtr = &stu;

    inputStudent(stuPtr);
    displayStudent(stuPtr);

    return 0;
}

