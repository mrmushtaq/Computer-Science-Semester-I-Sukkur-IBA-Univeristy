#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter NO#1.\n";
    cin>>num1;
    cout<<"Enter NO#2.\n";
    cin>>num2;

  if(num1>num2)
       cout<<"\n"<<num1<<" is greater than "<<num2<<endl;
  else if(num1<num2)
       cout<<"\n"<<num1<<" is less than "<<num2<<endl;
  else
       cout<<"\nBoth numbers are equal\n";
       return 0;
}

