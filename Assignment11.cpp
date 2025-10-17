// 11. Write a program to create a base class BankAccount with attributes like account_number and
// balance, and functions deposit() and withdraw().
// Derive two classes:
// 1. SavingsAccount with data member rate_of_interst and an additional function
// calculateInterest() and display it.
// 2. CurrentAccount, which requires maintaining a minimum balance and an additional
// function to calculate servicecharge() and reduce it from the balance, and display the details.
// Demonstrate inheritance by performing operations on objects of both derived classes.

//Answer

#include <iostream>
using namespace std;

class BankAccount {
protected:
    int account_number;
    double balance;

public:
    void inputAccount() {
        cout << "Enter Account Number: ";
        cin >> account_number;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(double amount) {
        balance = balance + amount;
        cout << "Amount deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayBalance() {
        cout << "Account Number: " << account_number << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
private:
    double rate_of_interest;

public:
    void inputSavings() {
        cout << "Enter Rate of Interest (%): ";
        cin >> rate_of_interest;
    }

    void calculateInterest() {
        double interest = (balance * rate_of_interest) / 100;
        cout << "Interest on balance: " << interest << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double minimum_balance;

public:
    void inputCurrent() {
        cout << "Enter Minimum Balance required: ";
        cin >> minimum_balance;
    }

    void calculateServiceCharge() {
        if (balance < minimum_balance) {
            double charge = 50; 
            balance = balance - charge;
            cout << "Balance less than minimum! Service charge of " << charge << " deducted." << endl;
        } else {
            cout << "No service charge applied." << endl;
        }
    }
};

int main() {
    cout << " Savings Account " << endl;
    SavingsAccount sa;
    sa.inputAccount();
    sa.inputSavings();
    sa.deposit(500);
    sa.withdraw(200);
    sa.displayBalance();
    sa.calculateInterest();

    cout << "\n Current Account " << endl;
    CurrentAccount ca;
    ca.inputAccount();
    ca.inputCurrent();
    ca.deposit(1000);
    ca.withdraw(1200);
    ca.displayBalance();
    ca.calculateServiceCharge();
    ca.displayBalance();

    
}
