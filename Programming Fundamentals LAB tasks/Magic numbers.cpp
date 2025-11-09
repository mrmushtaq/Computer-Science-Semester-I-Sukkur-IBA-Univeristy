#include <iostream>
using namespace std;
int main ()
{
	int arr[3][3], check=0;
	cout<<"Enter values of 2D array\n";
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<"array["<<i<<"]["<<j<<"] = ";
			cin>>arr[i][j];
		}
	}

if((arr[0][0]+arr[0][1]+arr[0][2]==15)&&
(arr[1][0]+arr[1][1]+arr[1][2]==15)&&
(arr[2][0]+arr[2][1]+arr[2][2]==15)&&
(arr[0][0]+arr[1][0]+arr[2][0]==15)&&
(arr[0][1]+arr[1][1]+arr[2][1]==15)&&
(arr[0][2]+arr[1][2]+arr[2][2]==15)&&
(arr[0][0]+arr[1][1]+arr[2][2]==15)&&
(arr[0][2]+arr[1][1]+arr[2][0]==15))
check==1;

	if(check==1)
	cout<<"\nIt is Lo Shou Magic Square Numbers";
	else
	cout<<"\nIt is not Lo Shou Magic Square Numbers";
	
return 0;
}


