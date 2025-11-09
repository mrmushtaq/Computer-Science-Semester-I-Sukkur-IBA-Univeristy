#include<iostream>
using namespace std;
int main ()
{
    int id, unit, bill;
    string name;
    cout<<"\nEnter your name: ";
    getline(cin, name);
    cout<<"\nEnter your ID number: ";
    cin>>id;
    cout<<"\nEnter unit consumed: ";
    cin>>unit;
	
if(unit>=0 && unit<200)
 {
      bill=unit*5;
      cout<<"\nYour electricity bill will be "<<bill<<endl;
 }
else if (unit>=200 &&unit<400)
 {
      bill=199*5 + (unit-199)*10;
      cout<<"\nYour electricity bill will be "<<bill<<endl;
       }
else if (unit>=400 &&unit<500)
   {
       bill=199*5 +199*10 + (unit-199-199)*15;
       cout<<"\nYour electricity bill will be "<<bill<<endl;
    }
else if (unit>=600)
    {
       bill=199*5 +199*10+199*15 + (unit-199-199-199)*20;
       cout<<"\nYour electricity bill will be "<<bill<<endl;
     }
else
        cout<<"Error occurred\n";
return 0;
}

