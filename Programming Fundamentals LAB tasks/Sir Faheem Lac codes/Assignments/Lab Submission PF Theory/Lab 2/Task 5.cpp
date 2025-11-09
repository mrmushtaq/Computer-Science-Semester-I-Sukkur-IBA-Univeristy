#include <iostream>
using namespace std;
int main ()
 {
    float distance, time, speed;
   cout<<"Enter distance covered by body in kilometers. "<<endl;
   cin>>distance;
    
   cout<<"Enter time taken by body in minutes."<<endl;
   cin>>time;
    
    speed = distance/time;
        cout<<"The speed of body will be "<<speed<<" km/min."<<endl;

    return 0;
}

