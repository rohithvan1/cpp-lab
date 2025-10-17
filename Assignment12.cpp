//12. Write a c++ program to perform multiple inheritance

//Answer

#include <iostream>
using namespace std;

class online_shopping {
public:
string item_name = "Rolex watch";
int quantity = 1;
float price = 130;
};

class shipping_details {
public:
float shipping_charge = 6;
};

class bill : public online_shopping,public shipping_details {
public:
bill()
{
float total = price + shipping_charge;
 cout<<"Item : "<<item_name<<endl;
   cout<<"Quantity : "<<quantity<<" nos"<<endl;
 cout<<"Price : "<<price<<endl;
cout<<"Shipping Charge : "<<shipping_charge<<endl;
 cout<<"Total : "<<total<<endl;
}
};
int main()
{
bill b1;
}
