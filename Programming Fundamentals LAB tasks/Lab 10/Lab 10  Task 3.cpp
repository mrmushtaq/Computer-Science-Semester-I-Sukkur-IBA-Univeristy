#include <iostream>
using namespace std;
int main ()
{
	int num1, num2;
	int*ptr1;
	int *ptr2;
	
	ptr1=&num1;
	ptr2=&num2;
	
	cout<<"\nEnter Number 1 : ";
	cin>>*(ptr1);
	
	cout<<"\nEnter Number 2 : ";
	cin>>*(ptr2);
	
	if(*(ptr1)==*(ptr2))
	cout<<"\nThese are equal numbers \n\n";
	else
	cout<<endl<<*(ptr1)<<" and "<<*(ptr2)<<" are not equal ";
return 0;
}


