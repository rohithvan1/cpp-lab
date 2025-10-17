// 10. Create a base class Person with data members name and age, and a member function display().
// Derive a class Student from Person that adds a data member roll_number and a member function

// showDetails(). Demonstrate single inheritance by creating an object of the Student class and calling
// both base and derived class functions.

  //Answer

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:  
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int roll_number;

public:
    void inputStudent() {
        cout << "Enter roll number: ";
        cin >> roll_number;
        cin.ignore();
    }

    void showDetails() {
        display(); 
        cout << "Roll Number: " << roll_number << endl;
    }
};

int main() {
    Student s1;

    cout << "Enter details for student:" << endl;
    s1.inputPerson();  
    s1.inputStudent();
    cout << "\n--- Student Details ---" << endl;
    s1.showDetails(); 

    return 0;
}
