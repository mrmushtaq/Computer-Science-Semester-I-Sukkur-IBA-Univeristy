#include <iostream>
using namespace std;
int main ()
{
	int ask;
	cout<<"How many numbers do you have ?  ";
	cin>>ask;
	
	int numbers[ask], check[ask] ;
	
	cout<<"Enter numbers \n";

for(int h=0; h<ask; h++)
{
	cin>>numbers[h];
}

		for(int i=0; i<ask; i++)
		{
			for(int j=0; j<ask; j++)
			{
				if(numbers[j]<=numbers[i])
				{
					int temp=numbers[j];
					numbers[j]=numbers[i];
					numbers[i]=temp;
				}
			}
		}


for(int i=0; i<ask; i++)
{
	check[i]=0;
	for(int j=0; j<ask; j++)
	{
		if(numbers[i]==numbers[j])
		{
			check[i]+=1;
		}
	}
}


cout<<"\n\n";
cout<<"N\tCount\n";
for(int i=0; i<ask; i++ )
	if(numbers[i]!=numbers[i+1])
		cout<<numbers[i]<<"\t"<<check[i]<<endl;
		
return 0;
}


