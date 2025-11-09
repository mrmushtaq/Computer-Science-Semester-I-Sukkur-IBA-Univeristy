#include <iostream>
using namespace std;
int Fib(int n)
{
 if(n<=0) return -1; //Error
 if(n<=2) return 1; //Base case
 return Fib(n-1)+Fib(n-2);
}

int main ()
{
	int n;
	cout<<"Enter number : ";
	cin>>n;
	cout<<Fib(n);


return 0;
}


