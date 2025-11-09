#include <iostream>
using namespace std;
int main ()
{
	int n;    //n= input number
	cout<<" Enter a any number upto ten digits : ";
	cin>>n;

// we find number of digits in input number
	
	int temp=n, num=0;    //num = total number of digits in input
    if (temp == 0)
	 num = 1; // Special case for the number 0
    else 
	{
        while (temp != 0)
		{
            temp/= 10;
            num++;
        }
    }
    
    // to break the input number into seperate digits
	int  arr[num];
	for (int i=0; i<num; i++)
	{
		arr[i]=n%10;
		n/=10;
	}
	
	
	cout<<"\nSame digits printed in array: \n";
	for(int i=num-1; i>=0; i--)
	cout<<arr[i]<<" ";

	cout<<"\n\nSame pattern of digits in reverse order \n";     
	for(int i=0; i<num; i++)
	cout<<arr[i]<<" ";
	
//sorting in assending order
	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	cout<<"\n\nSame digits arranged in assending order: \n";
	for(int i=0; i<num; i++)
	cout<<arr[i]<<" ";

//sorting in descending order	
	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	cout<<"\n\nSame digits arranged in descending order: \n";
	for(int i=0; i<num; i++)
	cout<<arr[i]<<" ";

return 0;
}


