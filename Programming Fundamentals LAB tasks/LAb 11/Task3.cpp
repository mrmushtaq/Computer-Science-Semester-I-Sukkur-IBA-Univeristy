#include <iostream>
#include <string>
using namespace std;

struct Employee
{
   int  EmployeeNumber;
   double BasicSalary, HouseAllowance, MedicalAllowance, Tax, GrossPay, NetSalary;
   string Name;
};


void EmpSalary(Employee &data)
{
	data.HouseAllowance = 10 * data.BasicSalary/100;
	data.MedicalAllowance = 5 * data.BasicSalary/100;
	data.Tax = 4 * data.BasicSalary/100;
	data.GrossPay= data.BasicSalary+data.HouseAllowance+data.MedicalAllowance;
	data.NetSalary = data.GrossPay - data.Tax;	
}

void display(Employee &data)
{
	cout << "***************************************************************" << endl;
    cout << "\t\tEmployee Details:" << endl;
    cout << "***************************************************************" << endl;
    cout << "Name: " << data.Name << endl;
    cout << "Employee Number: " << data.EmployeeNumber << endl;
    cout << "Basic Salary: " << data.BasicSalary << endl;
    cout << "House Allowance: " << data.HouseAllowance << endl;
    cout << "Medical Allowance: " << data.MedicalAllowance << endl;
    cout << "Tax: " << data.Tax << endl;
    cout << "Gross Pay: " << data.GrossPay << endl;
    cout << "Net Salary: " << data.NetSalary << endl;
}


int main()
{
    Employee data;

        cout<<"Enter Employee number : ";
        cin>>data.EmployeeNumber;
        cin.ignore();
        cout<<"Enter name of Employee : ";
        getline(cin,data.Name);
        cout<<"Enter Basic Salary : ";
        cin>>data.BasicSalary;
        cout<<endl;

    EmpSalary(data);
    display(data);

    return 0;
}

