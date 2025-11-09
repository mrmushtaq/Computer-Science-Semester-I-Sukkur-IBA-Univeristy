#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main ()
{
char a[20]="IBA ";
char b[20];
cout<<"uppercase = "<<strupr(a)<<endl;
//loop is used to convert into uper case
string c = a;
for(int i=0;i<c.length(); i++){
	c[i] = toupper(c[i]);
} 	
cout<<"for loop upper case: "<<c<<endl;
cout<<"lowercase = "<<strlwr(a)<<endl;
for(int i=0;i<c.length(); i++){
	c[i] = tolower(c[i]);
}
cout<<"for loop lower case: "<<c<<endl;
cout<<"lenghts = "<<strlen(a)<<endl; 
cout<<"lenghts = "<<c.size()<<endl;
cout<<"copy to b  = "<<strcpy(b,a)<<endl;
cout<<"b = "<<b<<endl;
cout<<"concatenation = "<<strcat(a,b)<<endl;
cout<<"a = "<<a<<endl;
cout<<"compare = "<<strcmp(a,b)<<endl;



return 0;
}


