#include<iostream>
using namespace std;
int main()
{
	char check;
	do

	{
		int c_time1,c_time2, w_time1, w_time2, f_time1, f_time2, r_time1, r_time2;
		cout<<"Please input time.\n";
		cout<<"Enter current time (Hours): ";
		cin>>c_time1;
		cout<<"Enter current time (minutes) : ";
		cin>>c_time2;
		
		cout<<"Enter waiting time (Hours): ";
		cin>>w_time1;
		cout<<"Enter waiting time (minutes) : ";
		cin>>w_time2;
		
		if(c_time1>=0  && c_time1<24 && c_time2>=0 && c_time2<=59 && w_time1>=0  && w_time1<24 && w_time2>=0 && w_time2<=59 )
		{
			if(c_time1==0 && c_time2>=0 && c_time2<=59)
				c_time1=12; 
			if(w_time1==0 && w_time2>=0 && w_time2<=59)
				w_time1=12;
				
			f_time1=c_time1+w_time1;
				if(f_time1>24)
					f_time1-=24;
				
				
				f_time2=c_time2+w_time2;	
				if(f_time2>59)
					{
					
						r_time2=f_time2-60;
						f_time1+=1;
						f_time2=r_time2;
								
					}
					
						if(f_time1>24)
					f_time1-=24;	
			
				cout<<endl<<"Your Final time will be "<<f_time1<<" : "<<f_time2;	
		}
	else 
	cout<<"\nInvalid Entry..... ";	
	
		cout<<"\n\nDo you want to continue if yes input (y): ";
		cin>>check;
	
	}
while(check=='y');

return 0;
}
