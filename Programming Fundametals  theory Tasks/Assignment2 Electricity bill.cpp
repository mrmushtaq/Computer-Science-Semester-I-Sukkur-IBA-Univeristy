#include <iostream>
using namespace std;
int main()
{
    string name;
	int c_units,bill;
	
	cout<<"Enter Your Name:"<<endl;
    	cin>>name;
	cout<<"Enter Your Electricity Consumed units:"<<endl;
    	cin>>c_units;
	
   	if(c_units>=0 && c_units<=100)
	   
	    {  
		   	bill=c_units*5;                    // per unit price is 5.
        	cout<<"Your billing amount is "<<bill<<endl;
       	}   
	else if(c_units>100 && c_units<=200)
	    {   
	    	bill=100*5+(c_units-100)*7;       // per unit price is 7 on above 100 units and previous 100 will be charged as per 5.
	        cout<<"Your billing amount is "<<bill<<endl;
	   	}
	else if(c_units>200)
	    {
	      	bill=100*5+(100*7) +(c_units-200)*15;  // per unit price is 15 on above 200 units and same previous criteria do apply as well.

	     	cout<<"Your billing amount is "<<bill<<endl;
		}
	
	else
	    cout<<"Invalid Entry "<<endl<<endl; 


   return 0;
}

