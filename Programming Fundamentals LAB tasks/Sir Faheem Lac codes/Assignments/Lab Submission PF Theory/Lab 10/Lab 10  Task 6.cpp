#include <iostream>
using namespace std;

int main ()
{	
	int arr[10], search, index;
	bool check=false;
	int*ptr;
	
	ptr=arr;
cout<<"Enter 10 Values of Array \n";
for(int i=0; i<10;i++)
{
	cout<<"ptr at index "<<i<<" = ";
	cin>>*(ptr+i);
}
	
cout<<endl;
for(int i=0; i<10;i++)
{
	cout<<"ptr at "<<i<<" index = "<<*(ptr+i)<<endl;
}

cout<<"\nEnter a number for searching : ";
cin>>search;

for(int i=0; i<10; i++)
{
	if(search==*(ptr+i))
	{
		check=true;
		index=i;
		break;
	}	
}

if(check==true)
cout<<endl<<search<<" is present in the array at index "<<index;	
else
cout<<endl<<"Sorry, "<<search<<" Not found ";
return 0;
}


