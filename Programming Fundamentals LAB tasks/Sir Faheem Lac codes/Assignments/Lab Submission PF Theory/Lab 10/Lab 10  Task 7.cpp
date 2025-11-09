#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
	*a=*a- *b;
	*b=*a+ *b;
	*a=*b- *a;
}
int main ()
{
	int a=5, b=10;
	cout<<"Before swaping: \n";
	cout<<"\ta = "<<a<<"\tb = "<<b;
	
	swap(&a,&b);
	cout<<"\nAfter swaping: \n";
	cout<<"\ta = "<<a<<"\tb = "<<b;		
return 0;
}


