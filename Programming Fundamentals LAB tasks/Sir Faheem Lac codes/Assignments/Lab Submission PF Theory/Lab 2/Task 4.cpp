#include <iostream>
using namespace std;
int main () 
{
    float Vi, a, Vf;
    cout<<"Enter initial velocity "<<endl;
    cin>>Vi;
    
    cout<<"Enter acceleration "<<endl;
    cin>>a;
    
    cout<<"\nAsuming that Vf=Vi+a"<<endl;
         Vf=Vi + a;
    cout<<"So the final velocity will be "<<Vf<<endl;
    return 0;
}

