#include <iostream>
#include <string>
using namespace std;

class TelephoneBill {
private:
    string Name;
    string Address;
    string TelNo;
    int no_of_calls;

public:
    void inputdetails() {
       cout << "Enter Name: ";
      getline(cin, Name);
cout << "Enter Address: ";
       getline(cin, Address);
  cout << "Enter Telephone Number: ";
       getline(cin, TelNo);
        cout << "Enter Number of Calls: ";
       cin >> no_of_calls;
    }

    friend void calculateamount(TelephoneBill tb);
};

void calculateamount(TelephoneBill tb) {
    const int charge_per_call = 2;
    int total_amount = tb.no_of_calls * charge_per_call;

   cout << "\nTelephone Bill " << endl;
   cout << "Name: " << tb.Name << endl;
    cout << "Address: " << tb.Address << endl;
   cout << "Telephone Number: " << tb.TelNo << endl;
    cout << "Number of Calls: " << tb.no_of_calls << endl;
   cout << "Amount to be Paid: Rs. " << total_amount << endl;
}

int main() {
    TelephoneBill customer;

    cout << "Enter Customer Details " << endl;
    customer.inputdetails();

    calculateamount(customer);

   
}


