#include <iostream>
using namespace std;
void BubbleSort(int ptr[20])
{
	for(int i=0; i<20; i++)
	{
		for(int j=0;j<20; j++)
		{
			if(ptr[j]>ptr[i])
			{
				int temp=ptr[j];
				ptr[j]=ptr[i];
				ptr[i]=temp;
			}
		}
	}
	
}


int main ()
{	
	int arr[20]={3,2,1,4,3,10,5,34,23,2,444,23,45,6,6,5,4,3,44,34};
	int*ptr;
	
	ptr=arr;
cout<<"Values of Arrays in unsorted order \n";
for(int i=0; i<20;i++)
{
	cout<<arr[i]<<" ";
}
	
	BubbleSort(arr);
	cout<<"\n\nValues of Arrays in sorted order \n";
for(int i=0; i<20;i++)
{
	cout<<arr[i]<<" ";
}	
	
return 0;
}


