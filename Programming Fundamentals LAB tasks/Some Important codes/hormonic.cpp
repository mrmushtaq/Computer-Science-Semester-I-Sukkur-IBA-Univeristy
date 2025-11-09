#include <iostream>
using namespace std;
int main ()
{  //  1/2 + 2/3 + 3/4 +.....
	for(int i=1,j=2;i<=10,j<=10;j++,i++)
		cout<<i<<"/"<<j<<" + ";
		
		cout<<endl;
	 //  1/2 + 3/4 + 5/6 +.....
	for(int i=1,j=2;i<=20,j<=20;i+=2,j+=2)
		cout<<i<<"/"<<j<<" + ";
	
return 0;
}


