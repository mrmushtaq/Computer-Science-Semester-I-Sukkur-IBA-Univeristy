#include<iostream> 
#include<string> 
using namespace std; 

int main () 
{ 
 string str; 
 int lower_count=0, upper_count=0, word_count=1, sent_count=1, sp_count=0;
 
 cout<<"Enter string value :  "; 
 getline(cin,str); 
   
 
 for(int i=0; i<str.length(); i++) 
  { 
   if(str[i]>=97 && str[i]<=122) 
   {  
   		lower_count+=1;
   } 
   else if(str[i]>=65 && str[i]<=90) 
   		upper_count+=1;
	else if((str[i]>=32 && str[i]<=47)||(str[i]>=58 && str[i]<=64)||(str[i]>=58 && str[i]<=64)||(str[i]>=91 && str[i]<=96)||(str[i]>=123 && str[i]<=126))
	sp_count+=1;
	
  }  
  
  for(int i=0; i<str.length(); i++) 
  	{ 
	   if(str[i] ==' ') 
	   {  
	   		word_count+=1;
	   } 
	}
	
	for(int i=0; i<str.length(); i++) 
  	{ 
   		if(str[i] =='.') 
	   	{  
	   		sent_count+=1;
	   	}
	}
  


  cout<<"Upper case latters are : "<<upper_count<<endl;
  cout<<"Lower case latters are : "<<lower_count<<endl;
  cout<<"Total Word in string are : "<<word_count<<endl;
  cout<<"Sentences in string are : "<<sent_count<<endl;
  cout<<"Special charecters in string are : "<<sp_count<<endl;
return 0; 
}  

