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
	
   	if((c_units>=0) && (c_units<=100))         // per unit price is 5.
	{
		bill=c_units*5
	     if ((bill >=2000) && (bill<=5000))
           	cout << "your billing amount with 10% tax is " << bill+(10/100.0)*bill;
            else if (bill >5000)
             	
			    cout<< "your billing amount with 20% tax is "<< bill+(20/100.0)*bill;
			else 
			    cout << "your billing amount is " << bill<<endl;
    }
 	    else if(c_units>100 && c_units<=200)   // per unit price is 7 on above 100 units and previous 100 will be charged as per 5.

 	       {
 	       	    bill= 100*5+(c_units-100)*7;
		          if ((bill >=2000) && (bill<=5000))
	            	cout << "your billing amount with 10% tax is " << bill+(10/100.0)*bill;
             else if (bill >5000)
                    cout<< "your billing amount with 20% tax is "<< bill+(20/100.0)*bill;
			    else 
					cout << "your billing amount is " <<bill<<endl;
	 }
    	    else if(c_units>200)    // per unit price is 7 on above 100 units and previous 100 will be charged as per 5.
    	    
	       {
	           bill=100*5+(100*7) +(c_units-200)*15;	      	
	         	if ((bill >=2000) && (bill<=5000))
	             	cout << "your billing amount with 10% tax is " << bill+(10/100.0)*bill;
             else if (bill >5000)
                	cout<< "your billing amount with 20% tax is "<< bill+(20/100.0)*bill;
             		
               else
            		cout << "your billing amount is " << bill;
	        }
    	else
    	    cout<<"Invalid Entry\n\n";
    		
    return 0;
}
 
