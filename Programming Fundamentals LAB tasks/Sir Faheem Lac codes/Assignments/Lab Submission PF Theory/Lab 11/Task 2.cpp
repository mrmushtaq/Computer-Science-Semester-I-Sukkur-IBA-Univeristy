#include <iostream>
#include <string>
using namespace std;

struct Product
{
    int model_num;
    int price;
    string name;
};

void Products(Product details[10])
{
    for (int i=0; i<10; i++)
    {
        cout<<"\nProduct "<<i+1<<" : "<<details[i].name;
        cout<<"\nModel number : "<<details[i].model_num;
        cout<<"\nPrice : " <<details[i].price;
        cout<<endl;
    }
}

int main()
{
    Product details[10];
    cout<<"You have to enter records of 10 products.\n\n";
    for (int i=0; i<10; i++)
    {
    	
        cout<<"Enter name of product "<<i+1<<" : ";
        cin.ignore();
        getline(cin,details[i].name);
        cout<<"Enter model number of "<<details[i].name <<" : ";
        cin>>details[i].model_num;
        cout<<"Enter Price of " <<details[i].name<<" : ";
        cin>>details[i].price;
        cout<<endl;
    }
    
    cout<<endl;
    Products(details);

    return 0;
}

