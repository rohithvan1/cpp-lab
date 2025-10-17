// 2. Write a program to define a class Book with the private members: BookID, BookName, BookPrice,
// and total_cost() to calculate total cost for the number of copies, where n is passed as an argument.
// Write public members
// 1. To input book details
// 2. Display book details
// 3. To input the number of copies required and display the Total cost to be paid.
// Create 3 Book objects and calculate the Total cost to be paid for each purchase.

//Answer

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int BookID;
    string BookName;
    float BookPrice;
    
    float total_cost(int n) {
        return BookPrice * n;
    }

public:
    void inputDetails() {
        cout << "Enter Book ID: ";
        cin >> BookID;
        cin.ignore(); 
        cout << "Enter Book Name: ";
        getline(cin, BookName);
        cout << "Enter Book Price: ";
        cin >> BookPrice;
    }
    void displayDetails() {
        cout << "\nBook Details:" << endl;
        cout << "Book ID: " << BookID << endl;
        cout << "Book Name: " << BookName << endl;
        cout << "Book Price: " << BookPrice << endl;
    }
    void purchase() {
        int n;
        cout << "Enter number of copies required: ";
        cin >> n;
        cout << "Total cost to be paid: Rs. " << total_cost(n) << endl;
    }
};

int main() {
    Book b1, b2, b3;

    cout << "Enter details for Book 1:" << endl;
    b1.inputDetails();
    cout << "\nEnter details for Book 2:" << endl;
    b2.inputDetails();
    cout << "\nEnter details for Book 3:" << endl;
    b3.inputDetails();

    cout << "\n--- Book Purchase Details ---" << endl;

    cout << "\nBook 1:" << endl;
    b1.displayDetails();
    b1.purchase();

    cout << "\nBook 2:" << endl;
    b2.displayDetails();
    b2.purchase();

    cout << "\nBook 3:" << endl;
    b3.displayDetails();
    b3.purchase();

    return 0;
}
