#include <iostream>
using namespace std;
int main ()
{
	int limit ;
	cout<<"Enter range of Fibnocci Series : ";
	cin>>limit;
	
int first=0, second=1, next;

int i=0;
    while (i<limit)
	{
        cout<<first << " ";
        next = first + second;
        first = second;
        second = next;
       i++;
    }


return 0;
}


