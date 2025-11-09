#include <iostream>
using namespace std;
void print(int*ptr)
{
	cout<<"The Numbers are: ";
	for(int i=0; i<5; i++)
	{
		cout<<*(ptr+i)<<" ";
	}	
}
void add(int*ptr)
{
	int sum=0;
	for(int i=0; i<5; i++)
	{
		sum+=*(ptr+i);
	}
	cout<<endl<<"The sum is : "<<sum;	
}
void dessending(int*ptr)
{
	
    for (int i=0; i<5; i++)
    {
        for (int j=i+1; j<5; j++)
        {
            if (*(ptr+i)<*(ptr+j)) 
            {
                int temp=*(ptr + i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }

	cout<<endl<<"\nNumbers in dessending order :  ";
	for(int i=0; i<5; i++)
	cout<<*(ptr+i)<<"  ";	
}

void assending(int*ptr)
{
	
    for (int i=0; i<5; i++)
    {
        for (int j=i+1; j<5; j++)
        {
            if (*(ptr+i)>*(ptr+j)) 
            {
                int temp=*(ptr + i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }

	cout<<endl<<"\nNumbers in asssending order :  ";
	for(int i=0; i<5; i++)
	cout<<*(ptr+i)<<"  ";
}

int max(int*ptr)
{
	int max=ptr[0];
	for(int i=0; i<5; i++)
	{
		if(ptr[i]>max)
		max=ptr[i];
	}

	return max;	
}

int min(int*ptr)
{
	int min=ptr[0];
	for(int i=0; i<5; i++)
	{
		if(ptr[i]<min)
		min=ptr[i];
	}

	return min;	
}
int main ()
{
	int arr[5];
	int*ptr=arr;
		cout<<"Enter 5 integer numbers : \n";
	for(int i=0; i<5; i++)
	{
		cin>>*(ptr+i);
	}
	cout<<endl;
	
	print(ptr);
	add(ptr);
	cout<<"\nMaximum Number is : "<<max(ptr);
	cout<<"\nMinimum Number is : "<<min(ptr);
	assending(ptr);
	dessending(ptr);

	
	


return 0;
}


