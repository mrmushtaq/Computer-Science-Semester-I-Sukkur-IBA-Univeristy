#include <iostream>
using namespace std;
int ReverseofNumbers(int num) 
{
	int rev=0;
	while(num>0)
	{
		int last=num%10;
		rev=rev*10 + last;
		num/=10;
	}
	return rev;
}

SumOfNumbers(int num)
{
	int sum=0;
	while(num>0)
	{
		int last=num%10;
		sum+=last;
		num/=10;
	}
	
	return sum;
}

int OddInNumbers(int num)
{
	int odd=0;
	while(num>0)
	{
		int last=num%10;
		if(last%2!=0)
		{
			odd=odd*10 + last;	
		}
		num/=10;
	}
	
	return odd;	
}

int EvenInNumbers(int num)
{
	int Even=0;
	while(num>0)
	{
		int last=num%10;
		if(last%2==0)
		{
			Even=Even*10 + last;	
		}
		num/=10;
	}
	
	return Even;
}

int main ()
{
	int num; 
	cout<<"Enetr any number ";
	cin>>num;
	
	cout<<"Numbers in reverse order: "<<ReverseofNumbers(num);
	cout<<"\nSum of Digits :  "<<SumOfNumbers(num);
	cout<<"\nOdd Digits :  "<<OddInNumbers(num);
	cout<<"\nEven Digits :  "<<EvenInNumbers(num);
return 0;
}


